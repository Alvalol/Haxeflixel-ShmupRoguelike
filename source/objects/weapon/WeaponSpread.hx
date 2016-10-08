package objects.weapon;

// This is where the bullet itself should be initialized and created

class WeaponSpread implements IWeaponSpread
{
	
	var bulletAmount:Int;
	var bullets:Array<WeaponBullet>;
	
	// if bulletAmount == bullets.length then pass them to the weapon to shoot
	
	public function new() 
	{
		
	}
	
	public function createBullets():Array<WeaponBullet>
	{
		
		return bullets;
	}
	/*
	 * for(i in 0...bulletAmount)
	 * {
	 * wBullet = new WeaponBullet(x,y,angle);
	 */
	
}