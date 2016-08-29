﻿/*
* Copyright (c) 2006-2007 Adam Newgas
*
* This software is provided 'as-is', without any express or implied
* warranty.  In no event will the authors be held liable for any damages
* arising from the use of this software.
* Permission is granted to anyone to use this software for any purpose,
* including commercial applications, and to alter it and redistribute it
* freely, subject to the following restrictions:
* 1. The origin of this software must not be misrepresented; you must not
* claim that you wrote the original software. If you use this software
* in a product, an acknowledgment in the product documentation would be
* appreciated but is not required.
* 2. Altered source versions must be plainly marked as such, and must not be
* misrepresented as being the original software.
* 3. This notice may not be removed or altered from any source distribution.
*/

package box2D.dynamics.controllers;


import box2D.common.math.B2Vec2;
import box2D.dynamics.B2Body;
import box2D.dynamics.B2TimeStep;


/**
 * Applies an acceleration every frame, like gravity
 */
class B2ConstantAccelController extends B2Controller
{	
	/**
	 * The acceleration to apply
	 */
	public var A:B2Vec2;
	
	
	public function new () {
		
		A = new B2Vec2(0, 0);
		
	}
	
	public override function step(step:B2TimeStep):Void{
		var smallA:B2Vec2 = new B2Vec2(A.x * step.dt, A.y * step.dt);
		var i:B2ControllerEdge=m_bodyList;
		while (i != null){
			var body:B2Body = i.body;
			if(!body.isAwake()) {
				i=i.nextBody
				continue;
			}
			//Am being lazy here
			body.setLinearVelocity(new B2Vec2(
				body.getLinearVelocity().x +smallA.x,
				body.getLinearVelocity().y +smallA.y
				));
			i = i.nextBody;
		}
	}
}