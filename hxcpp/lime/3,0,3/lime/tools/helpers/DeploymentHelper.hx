package lime.tools.helpers;


import lime.project.HXProject;


class DeploymentHelper {
	
	
	public static function deploy (project:HXProject, targetFlags:Map <String, String>, targetDirectory:String, targetName:String) {
		
		var name = project.meta.title + " (" + project.meta.version + " build " + project.meta.buildNumber + ") (" + targetName + ").zip";
		var targetPath = PathHelper.combine (targetDirectory, name);
		
		ZipHelper.compress (PathHelper.combine (targetDirectory, "bin"), targetPath);
		
		if (targetFlags.exists ("gdrive")) {
			
			var parent = targetFlags.get ("parent");
			
			var args = ["upload" , "-f" , targetPath];
			
			if (targetFlags.exists("config")) {
			
				args.push("--config");
				args.push(targetFlags.get("config"));
				
			}
			
			if (parent != null && parent != "") {
				
				args.push("-p");
				args.push(parent);
				
			}
			
			ProcessHelper.runCommand("","drive",args);
			
		}
		
	}
	
	
}
