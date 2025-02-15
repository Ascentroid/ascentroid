# Ascentroid Map Kit

Current Build Status: <b>Prototype / Experimental</b>

The Ascentroid Map Kit is an Unreal Engine 4 ("UE") plugin you install into the UE editor to assist with the creation of campaigns and levels for Ascentroid.

The map kit, essentially, builds a <b>\*.pak</b> file, which treats your campaign/content like a game <b>MOD</b> for Ascentroid. It will also use a custom <b>\*.json</b> file for  important, and required, meta data for your campaign.

What's great about this is that it allows map creators to utilize <b><i>almost all of the full features/capabilities of UE</i></b>!

## Prerequisites

1) Only <b>Windows</b>, <b>x64</b> is supported <i>right now</i>. Make sure you meet the [required Hardware and Software Specifications for Unreal Engine](https://docs.unrealengine.com/4.26/en-US/Basics/InstallingUnrealEngine/RecommendedSpecifications/).

2) Since UE treats a campaign like a <b>MOD</b>, it <b>requires Microsoft's C++ compiler</b>. You have two options:

* <b><i>Option #1</i></b> (free, smaller download size): Install [Visual Studio Code](https://code.visualstudio.com/docs/?dv=win) + [Visual Studio 2019 Build Tools](https://visualstudio.microsoft.com/vs/older-downloads/) following this [installation tutorial](http://jollymonsterstudio.com/2018/11/02/unreal-c-with-visual-studio-code/). ✅ <b><u>RECOMMENDED</u></b>

* <b><i>Option 2</i></b> (free, larger download size): Install [Visual Studio 2019 or 2017 Community Edition](https://visualstudio.microsoft.com/downloads/) following this [installation tutorial](https://docs.unrealengine.com/4.26/en-US/ProductionPipelines/DevelopmentSetup/VisualStudioSetup/). ❌ <b><u>NOT RECOMMENDED</u></b>

3) Install Unreal Engine <b><u>4.26.2</u></b> by following the [official installation guide](https://docs.unrealengine.com/4.26/en-US/installing-unreal-engine/). When prompted, select the <b>Publishing License</b>.

* <b>IMPORTANT</b>: You <b>MUST</b> install the specific UE version <b><u>4.26.2</u></b>. Do <b>NOT</b> install a different version! Ascentroid is built on <b><u>4.26.2</u></b>. If you use a different version, your campaigns will <b>NOT</b> work! If you create a campaign on the wrong engine version, you will have to delete it and re-create it with the correct engine version!

![Imgur](https://i.imgur.com/6P5kjij.png)

* #1: In the Epic Games Launcher, click <b>Unreal Engine</b> on the left menu.
* #2: Click <b>Library</b> on the top menu.
* #3: Click the <b>[+]</b> icon to the right of <b>Engine Versions</b>.
* #4: Click the dropdown on the engine version number.
* #5: Select <b>4.26.2</b> from the dropdown and click install. When the install is finsihed, this is the version that should appear as installed:

![Imgur](https://i.imgur.com/w4ats9o.png)

4) If not already installed, install the [.NET Framework 4.7.2 Runtime](https://dotnet.microsoft.com/download/dotnet-framework/thank-you/net472-web-installer). This is <b>required</b> for the [Ascentroid Map Kit Setup Utility](https://github.com/Ascentroid/Ascentroid/blob/latest-stable/MapKit/Setup/AscMapKitSetup.zip).

Note: you may need to run all installations as a <b>Windows Administrator</b> user.

<br/><br/><br/>

### Setup Your Campaign Project

Install Ascentroid (the game). The latest test builds are posted in the [Ascentroid Discord](https://discord.gg/pktfw78) in the <b>#downloads</b> channel.

Start UE and create a new, blank <b>C++</b> project for your campaign <b>without Starter Content</b>:

![Imgur](https://i.imgur.com/5Msq0OW.png)

![Imgur](https://i.imgur.com/IxDBZi9.png)

![Imgur](https://i.imgur.com/YGuy48Z.png)

Open your UE campaign project if it doesn't automatically open after you create it.

Once open, click the <b>Show Sources</b> icon in the <b>Content Browser</b>:

![Imgur](https://i.imgur.com/a3xkG7J.png)

In the lower, right-hand corner of the <b>Content Browser</b>, click the <b>View Options</b> and make sure <b>Show C++ Classes</b> and <b>Show Plugin Content</b> options are selected/checked.

![Imgur](https://i.imgur.com/j7PETD7.png)

Now, close the UE campaign project.

Download the [Ascentroid Map Kit Setup Utility](https://github.com/Ascentroid/Ascentroid/blob/latest-stable/MapKit/Setup/AscMapKitSetup.zip) (requires [.NET Framework 4.7.2 Runtime](https://dotnet.microsoft.com/download/dotnet-framework/thank-you/net472-web-installer)):

https://github.com/Ascentroid/Ascentroid/blob/latest-stable/MapKit/Setup/AscMapKitSetup.zip

Unzip anywhere and execute <b>AscMapKitSetup.exe</b>. Run as a <b>Windows Administrator</b> user:

![Imgur](https://i.imgur.com/6iVNY0e.png)

![Imgur](https://i.imgur.com/G9vad3v.png)

Follow the steps and provide the folder/file locations as requested in the utility. When ready, click the <b>Initialize Now!</b> button.

![Imgur](https://i.imgur.com/Nzo9LjJ.png)

The utility will perform the following in the background:

1) Downloads the UE map kit source files and extracts them to the appropriate campaign project folders.

2) It will install a <b>AscMapKit</b> plugin into your UE campaign project. These files contain map kit content and C++ actors you can use in your levels (grates, fans, signs, doors, enemies, powerups, and more).

3) It will install a <b>Campaign</b> plugin in your UE campaign project. This plugin is <b>required</b> in order to <b>cook</b> a <b>*.pak</b> file, which will contain all of your campaign content to be used by the Ascentroid game runtime.

4) It will place an <b>Empty.umap</b> level file into your UE campaign project <b>Content</b> folder. This empty level, and file name, is <b>required</b> in order for the <b>cook</b> process to work. <i>I don't know why... it's some kind of wonky UE thing.</i>

5) It will create a <b>_BatchScripts</b> folder at the root of your UE campaign project. It will contain a few batch files you will need to use later.

6) It will create a <b>*.json</b> file at the root of your UE campaign project. This file contains important, and required, meta data used by the Ascentroid game runtime.

When the map kit setup is complete, it should pop-up a series of steps to help guide you through the final setup:

![Imgur](https://i.imgur.com/uOW4G5o.png)

1) Execute (as a <b>Windows Administrator</b> user):
```
[campaign project root]\_BatchScripts\GenerateProject.bat
```

Note: if running this command displays <b>ERROR: Could not find NetFxSDK install dir; this will prevent SwarmInterface from installing. Install a version of .NET Framework SDK at 4.6.0 or higher</b>, you did not install the proper Visual Studio components as instructed in the external tutorial/documentation! However, you can fix it quickly by simply installing the [.NET Framework 4.7.2 Developer Pack](https://dotnet.microsoft.com/download/dotnet-framework/thank-you/net472-developer-pack-offline-installer). After that is installed, run the <b><i>GenerateProject.bat</i></b> script again. It should (hopefully) work now.

2) Execute (as a <b>Windows Administrator</b> user):
```
[campaign project root]\_BatchScripts\Compile.bat
```

3) Open your UE campaign project.

4) If UE prompts to update the project, click <b>Update</b>:

![Imgur](https://i.imgur.com/c6JXMUB.png)

5) If UE prompts about new plugins being available, click <b>Dismiss</b>:

![Imgur](https://i.imgur.com/NFjatG5.png)

6) Create at least one level in your UE project and save it to the <b>Campaign Content</b> folder.

7) Edit campaign <b>*.json</b> (make sure your campaign and level name(s) match):
```
[campaign project root]\[campaign project name].json
```

8) All assets used in your campaign <b>must</b> be saved in the <b>Campaign Content</b> folder (or they won't cook!).

9) To cook your campaign, execute (as a <b>Windows Administrator</b> user):
```
[campaign project root]\_BatchScripts\Cook.bat
```

10) The <b>\*.json</b> and <b>\*.pak</b> files for your campaign will be copied to the Ascentroid game folder:
```
[game root]\Ascentroid\Content\Ascentroid\Campaigns
```

11) If everything worked, you can now test your campaign in the game, Ascentroid!

12) Visit Github for more documentation: https://github.com/Ascentroid/Ascentroid

13) Visit YouTube for tutorials: http://youtube.ascentroid.com

<br/><br/><br/>

## Important Notes

1) All content must be placed in the <b>Campaign Content</b> folder, or it will not get cooked into your <b>\*.pak</b> file!

2) Everything you see in this map kit and documentation is subject to change as development progresses. If you have a question or comment, [let me know](mailto:ascentroid@gmail.com).

3) Ascentroid uses a large scale in order to fix problems with collision. A cube scale of 20m x 20m x 20m is the general standard.

4) Read the [FAQ](#faq).

<br/><br/><br/>

## How do I build stuff?

#### You may want to learn some basics about Unreal Engine:

* Tutorial to convert old levels using Blender and Unreal Engine: https://www.youtube.com/watch?v=H6XOQAU8rJ8
* https://www.informit.com/articles/article.aspx?p=2819033&seqNum=3
* https://docs.unrealengine.com/en-US/index.html
* https://docs.unrealengine.com/en-US/WorkingWithContent/index.html
* https://docs.unrealengine.com/en-US/WorkingWithContent/Importing/FBX/StaticMeshes/index.html
* https://docs.unrealengine.com/en-US/WorkingWithContent/Importing/HowTo/index.html
* https://docs.unrealengine.com/en-US/Resources/ContentExamples/Lighting/index.html
* https://docs.unrealengine.com/en-US/Resources/ContentExamples/MaterialNodes/index.html
* https://docs.unrealengine.com/en-US/RenderingAndGraphics/index.html
* Import 3D meshes: https://www.youtube.com/watch?v=_FgedJWInL0
* Lighting basics: https://www.youtube.com/watch?v=FsjqVIyr0O4
* Hierarchical Instanced Static Meshes: https://www.youtube.com/watch?v=GmFYPotzLhc

<br/>

#### If you don't want to learn 3D modeling tools, you can try some Marketplace assets:

##### <a name="supergrid"></a> [SuperGrid](https://www.unrealengine.com/marketplace/en-US/product/supergrid-starter-pack) - <i>highly recommended</i>!

![SuperGrid](https://cdn1.epicgames.com/ue/item/SuperGrid_Screenshot_02-1920x1080-a7795c4363fe32b96e0e4cdc22262f71.png?resize=1&w=1600)

If you want to make maps quickly without having to learn a 3D modeling program, I highly recommend [SuperGrid](https://www.unrealengine.com/marketplace/en-US/product/supergrid-starter-pack) (which is free!).

Download it from the UE Marketplace here: https://www.unrealengine.com/marketplace/en-US/product/supergrid-starter-pack

SuperGrid has a series of preview videos here: https://www.youtube.com/playlist?list=PLx7zxUeK-7HiAsH4DyaklZW0NAIyKGc2N

Here is another small demo video:
https://www.youtube.com/watch?v=NxUq_rD8PVM

Tip: you can use SuperGrid <b><i>in addition to</i></b> a 3D modeling tool if you wish! It can be very handy to use both in your campaign(s)!

To get SuperGrid setup in your campaign project, do the following:

1) From the Marketplace, click <b>Create Project</b>:

![Imgur](https://i.imgur.com/WgLnsJ8.png)

2) Use the default project locations and click <b>Create</b>. We will be manually copying the content out of this project and into your campaign project next:

![Imgur](https://i.imgur.com/lbXh1Dw.png)

3) Copy the content folder for the default SuperGrid project to the content folder for your campaign project:

From:
```
[SuperGrid project root]\Content\SuperGrid
```

To:
```
[campaign project root]\Content\SuperGrid
```

For example, from:

![Imgur](https://i.imgur.com/d6072TT.png)

To:

![Imgur](https://i.imgur.com/qy563ms.png)

4) Now, open your UE campaign project.

5) If it worked, you should now see the <b>SuperGrid</b> folder in the <b>Content Browser</b> under the root <b>Content</b> folder:

![Imgur](https://i.imgur.com/T2WVpfH.png)

Note: You <b>cannot</b> start using SuperGrid yet! The next steps are <b>critical</b>! Remember: all content must be placed in the <b>Campaign Content</b> folder, or it will not get cooked into your <b>\*.pak</b> file! See <b>[Other Marketplace Content](#other-marketplace-content)</b> for details on why these next steps are absolutely necessary.

6) Drag and drop the SuperGrid folder from the <b>Content</b> folder to the <b>Campaign Content</b> folder (optionally, if you want to place SuperGrid into sub-folder(s) under <b>Campaign Content</b>, create them and move the assets there):

![Imgur](https://i.imgur.com/TPeCXMs.png)

7) When prompted, select <b>Move Here</b>:

![Imgur](https://i.imgur.com/9LNKNwE.png)

8) The UE editor will begin migrating assets to your <b>Campaign Content</b> folder:

![Imgur](https://i.imgur.com/JvoW17Z.png)

9) You should now be able to start using SuperGrid in your level(s). Just be sure you use everything that is in the <b>Campaign Content</b> folder!

![Imgur](https://i.imgur.com/KggNFL7.png)

Tip: if you would like to save on some disk space, I recommend that you delete unused asset files when using Marketplace content. For example, for SuperGrid, I would delete everything in the <b>TutorialLevel</b> folder, the <b>Blueprints</b> folder, and the <b>Overview</b> file(s).

Tip: after everything has been moved; if there is a set of empty SuperGrid folders still visible in the <b>Content</b> folder, just delete them from the file system / using file explorer.

To reiterate: see <b>[Other Marketplace Content](#other-marketplace-content)</b> for details on why these steps are absolutely necessary.

<br/>

##### Built-In Editor UE Mesh Plugins - <i>highly recommended!</i>

UE has a few plugins included (free!) you can enable which will allow you to work with 3D meshes directly in the editor. Just go to Edit -> Plugins and enable them:

![Imgur](https://i.imgur.com/5nxvjrM.png)

![Imgur](https://i.imgur.com/apsfsvk.png)

Here are some tutorial videos on how to use some of these free UE plugins:

* https://www.youtube.com/watch?v=7Ff0zZcHmaU
* https://www.youtube.com/watch?v=P75oIsxrYlY
* https://www.youtube.com/watch?v=UqR6rnZEidg
* https://www.youtube.com/watch?v=hdk5Bf4zZwk

<br/>

##### <a name="mesh-tool"></a>[Mesh Tool](https://forums.unrealengine.com/unreal-engine/marketplace/107840-mesh-tool-a-mesh-editor) - <i>highly recommended</i>!

[Mesh Tool](https://forums.unrealengine.com/unreal-engine/marketplace/107840-mesh-tool-a-mesh-editor) is a commercial (paid) UE plugin which allows you to edit mesh assets and prototype props and levels without leaving the UE Editor. It also includes basic UV mapping tools!

![MeshTool](https://d3kjluh73b9h9o.cloudfront.net/original/3X/5/3/53e2d19b206094fc4216cbdd4e95c5769c93dd91.jpeg)

![MeshTool](https://d3kjluh73b9h9o.cloudfront.net/original/3X/c/4/c4df8cfb5c1d52ecf550af5708bbf162b2bc9a8e.jpeg)

Mesh Tool links:

* [Unreal Engine Forums](https://forums.unrealengine.com/unreal-engine/marketplace/107840-mesh-tool-a-mesh-editor)
* [Get Mesh Tool on the Marketplace](https://www.unrealengine.com/marketplace/mesh-tool)
* [Get Mesh Tool on itch.io](https://marynate.itch.io/mesh-tool)
* [YouTube Tutorials](https://www.youtube.com/playlist?list=PLAKCoctl4aHxyY9fZbQIpdtEdzlj09GSn)
* [User Guide](https://docs.google.com/document/d/1yCEFGz4LEWdhZEw3bk_tCPI3Gg6D-29_AhtkeWJqm1g/pub)
* [Issue Tracker](https://github.com/marynate/mesh-tool/issues)

Tip: Keep an eye out for asset sales. Sometimes you can get a helpful tool for less, or even sometimes <i>free</i>, during a sale.

<br/>

##### <a name="mesh-tool"></a>[Instance Tool](https://www.unrealengine.com/marketplace/en-US/product/instance-tool) - <i>highly recommended</i>!

[Instance Tool](https://www.unrealengine.com/marketplace/en-US/product/instance-tool) is a commercial (paid) UE plugin which allows you to quickly select/edit/convert Instanced Static Meshes in editor viewports. This is a good tool to have for [performance/optimization](#performance-optimization).

![Imgur](https://cdn1.epicgames.com/ue/item/InstanceTool_screenshot_7-1920x1080-ce11e1497e8f0529bc734ab6f46b2d18.jpg?resize=1&w=1600)

* [Get Instance Tool on the Marketplace](https://www.unrealengine.com/marketplace/en-US/product/instance-tool)

Tip: Keep an eye out for asset sales. Sometimes you can get a helpful tool for less, or even sometimes <i>free</i>, during a sale.

<br/>

##### <a name="other-marketplace-content"></a>Other Marketplace Content

You can try using more [Marketplace](https://www.unrealengine.com/marketplace) assets from the UE Marketplace here: https://www.unrealengine.com/marketplace

Epic has a lot of free assets available as well: https://www.unrealengine.com/marketplace/en-US/free

When using assets from the UE Marketplace, be sure to follow these guidelines:

* If the asset requires the creation of a UE project, always create the default project somewhere temporary, first, and then manually copy the assets to the <b>Content</b> folder of your UE project.

* If the asset is able to install directly into your UE campaign project, the asset should always get installed to the <b>Content</b> folder of your UE project, first (this is typically the default anyway).

* The reason assets need to go in the <b>Content</b> folder first is because UE uses an internal <b>reference path</b> system to associate dependencies between assets.

* For example, let's say you have an asset pack called <b>SomeMarketplaceAssetPack</b> with a material and a texture inside of it:

```
/Content/SomeMarketplaceAssetPack/Materials/M_SomeMaterial
/Content/SomeMarketplaceAssetPack/Textures/T_SomeTexture
```

* If the material asset <b>M_SomeMaterial</b> is utilizing/referencing the texture <b>T_SomeTexture</b> inside of it, then the material will be pointing to the <b>absolute path</b> of the texture asset, like this:

```
/Content/SomeMarketplaceAssetPack/Textures/T_SomeTexture
```

* If you made the mistake of only copying/moving <b>M_SomeMaterial</b> to your <b>Campaign Content</b> folder, but not <b>T_SomeTexture</b>, then <b>M_SomeMaterial</b> would still be referencing the wrong <b>absolute path</b> (above). This means the asset <b><i>will not be cooked</i></b>!

* To make sure the paths are migrated to the <b>Campaign Content</b> folder properly, you can follow a few steps and the UE editor <b><i>will automatically fix/resolve most of the dependencies for the absolute paths for you</i></b>!

* Drag and drop the marketplace asset folder from the <b>Content</b> folder to the <b>Campaign Content</b> folder (optionally, if you want to place marketplace asset into sub-folder(s) under <b>Campaign Content</b>, create them and move the assets there):

![Imgur](https://i.imgur.com/TPeCXMs.png)

* When prompted, select <b>Move Here</b>:

![Imgur](https://i.imgur.com/9LNKNwE.png)

* The UE editor will begin migrating assets to your <b>Campaign Content</b> folder. It's at this point the editor <b><i>will automatically fix/resolve all of the dependencies for the absolute paths for you</i></b>.

![Imgur](https://i.imgur.com/JvoW17Z.png)

* You can try this out by following the installation instructions for [SuperGrid](#supergrid).

Note: this may or may not have adverse affects on different types of assets contained within the marketplace content (for example: Blueprint dependencies). It has not been fully tested and results may vary, depending on how complicated the marketplace asset(s) you are working with are. You <i>may</i> have to perform additional manual work to make certain things compatible when moving things over to the <b>Campaign Content</b> folder. It's up to you to decide how advanced you want to make things.

Tip: remember, if you would like to save disk space for your UE campaign project, analyze all marketplace assets and delete assets which are unnecessary.

<br/>

#### <a name="3d-tools"></a>Use 3D tools:

* [Blender](https://www.blender.org/) (free)
* [MagicaVoxel](http://ephtracy.github.io/) (free)
* [Silo 3D](https://nevercenter.com/silo/) (paid)
* [Maya](https://makeanything.autodesk.com/maya-indie-usa) (paid)
* [3D Studio Max](https://makeanything.autodesk.com/3dsmax-indie-usa) (paid)
* [Modo](https://www.foundry.com/products/modo) (paid)
* [Lightwave](https://www.lightwave3d.com/buy-lightwave/) (paid)
* [Rhino 3D](https://www.rhino3d.com/) (paid)
* [Sketchup](https://www.sketchup.com/plans-and-pricing/sketchup-free) (free)
* [Substance Designer](https://www.substance3d.com/products/substance-designer/) (paid)
* [Houdini](https://www.sidefx.com/products/houdini/houdini-indie/) (paid)
* Want more tools listed here? [Contact me](mailto:ascentroid@gmail.com)

<br/><br/><br/>

#### <a name="import-3d-meshes"></a>Importing 3D Meshes into UE

If you want per-poly collision on the 3D mesh you are going to import into UE:

* When importing your FBX, uncheck <b>Auto Generate Collision</b>:

![Imgur](https://i.imgur.com/A5zVOvi.png)

* Once it has been imported, edit your mesh in UE and go to the collision properties. Set the <i>Collision Complexity</i> to <b>Use Complex Collision As Simple</b>. This tells the engine to use per-poly collision on this mesh.

![Imgur](https://i.imgur.com/6ei4Tg7.png)

* Note: keep in mind any additional work you may need to consider for [performance/optimization](#performance-optimization).

<br/><br/><br/>

#### Import levels from other games

Descent 1 and 2:

Tutorial to convert old levels using Blender and Unreal Engine:
* https://www.youtube.com/watch?v=H6XOQAU8rJ8

It's even *easier* to convert a level using [Mesh Tool](https://www.unrealengine.com/marketplace/en-US/product/mesh-tool), a commercial Unreal Engine plugin ($50). We will create a tutorial video for this plugin in the near future.

* Setup [OTDVM](http://www.columbia.edu/~em36/otvdm.html) (easy), **OR** (harder) setup a [Windows 98](https://winworldpc.com/product/windows-98/98-second-edition) virtual machine (consider using [VirtualBox](https://www.virtualbox.org/), which is free).

* [Download](https://drive.google.com/file/d/1E4M43I8zox58ODjqulhXaBSMnyYJu2z5/view?usp=sharing) and setup [LVLVIEW32](https://drive.google.com/file/d/1E4M43I8zox58ODjqulhXaBSMnyYJu2z5/view?usp=sharing) with OTDVM, **OR** on your Windows 98 virtual machine. Instructions/details are not included here; you will have to sort that out yourself since the process can be subjective depending on how you setup your environment.

* In [LVLVIEW32](https://drive.google.com/file/d/1E4M43I8zox58ODjqulhXaBSMnyYJu2z5/view?usp=sharing), export your level to a DXF file.

* Convert the DXF file to a FBX file. You can use a [3D tool](#3d-tools), or try a free 3D file converter like this one: https://products.aspose.app/3d/conversion/dxf-to-fbx

* Some of the 3D mesh normals may be flipped. You can use a [3D tool](#3d-tools), or [Mesh Tool](#mesh-tool), to fix your normals.

* You will probably need to scale your level to match Ascentroid's scale. A cube at Ascentroid scale is 20m x 20m x 20m. You can use a [3D tool](#3d-tools), or [Mesh Tool](#mesh-tool) to re-scale your level 3D mesh.

* Texture your level 3D mesh by setting up UV mapping. You can use a [3D tool](#3d-tools), or [Mesh Tool](#mesh-tool).

* Import your level 3D mesh into your UE campaign project. Remember: all assets used in your campaign <b>must</b> be saved in the <b>Campaign Content</b> folder (or they won't cook!).

* <b>Optional, subjective</b>: When you [import your level 3D mesh](#import-3d-meshes) into the UE editor, you will probably want to disable collision generation. After it has been imported, edit the level 3D mesh and enable per-poly collision by setting <i>Collision Complexity</i> to <b>Use Complex Collision as Simple</b>:

![Imgur](https://i.imgur.com/PbdjoPb.png)

Common steps in Unreal Engine's editor (not in order) to perform a level conversion:
* Unreal Engine project settings: Generate project a ID, otherwise the campaign won't cook
* Unreal Engine world settings: Set num skylights to 0 (this saves some light build processing time)
* Unreal Engine world settings: Check "Force no precompute lights" (this sets lights to fully dynamic, so you can build without having to light build)
* Unreal Engine level: Place global items and effects (copy from Template campaign)
* Unreal Engine level: Place global lights, amount, positioning (copy from Template campaign)
* Unreal Engine level: Setup navmap, positioning, sizing to encompass the level with some padding (necessary, otherwise the navmap fog of war won't work)
* Unreal Engine world outliner: Folder organization!
* Unreal Engine content manager: Folder organization!
* Unreal Engine content manager: Import FBX of your level and review the import options
* Unreal Engine content manager: Update your level static mesh to set Collision Complexity to "Use Complex Collision as Simple"
* Unreal Engine content manager: Update your level static mesh Light Map Resolution to something high like "1024" or "2048" ("1024" is usually high enough)
* Unreal Engine content manager: Move textures to its own content folder
* Unreal Engine content manager: Move materials to its own content folder
* Unreal Engine content manager: Edit materials (for cartoony style, set Metallic and Specular to "0" (zero), and Roughness to "1")
* Unreal Engine level: Add player starts from the map kit
* Unreal Engine level: Add powerup respawn triggers from the map kit
* Unreal Engine level: Add doors from the map kit (remember to set unique IDs for all!)
* Unreal Engine level: Add decor (grates, signs, etc)
* Unreal Engine level: Add lights (copy from template campaign if you want)
* Unreal Engine level: Add powerups from the map kit
* Unreal Engine level: Add level author decor letters and lights for them (if you want)
* Unreal Engine world settings: Uncheck "Force no precompute lights" (turns off dynamic lights to prepare for light building)
* Unreal Engine level: Add any desired triggers from the map kit (if applicable)
* Unreal Engine level: Add any desired Blueprint scripting (if applicable)
* Unreal Engine level: Adjust global lights (lights will be brighter when light building, so turn them down)
* Unreal Engine light build settings: Set the light build quality to "Production"
* Unreal Engine level: Build lights
* Unreal Engine content manager: Fix level light map UVs and resolution if necessary
* Unreal Engine level: Tweak and build lights repeatedly until you get it right (toggle "Force no precompute lights" in world settings to help; switch from dynamic to static to dynamic to static repeatedly to help figure out good lighting techniques in combination with light building [with the goal of producing final, baked, static lights])
* Unreal Engine level: Run Cook.bat
* Finally: Test your campaign in the game. If it looks good, zip the campaign json and pak files, and offer to players (mission database may become available in the future, recommend something like Google Drive in the meantime)

<br/><br/><br/>

### <a name="map-kit-usage"></a>Ascentroid Map Kit Usage

<b>Overview</b>

The Ascentroid map kit contains pre-fab assets and actors you can use in your UE campaign project level(s).

<b>Pre-fab Content</b>

* Placeable pre-fab content can be found in the <b>AscMapKit Content</b> folder. Feel free to explore this content to use in your project:

![Imgur](https://i.imgur.com/Mz1Ytms.png)

* You can drag and drop static meshes into your level(s). You can also use some of the materials, particles, textures and other assets that are available as part of pre-fab content.

* For example, I swapped out the color of the sign text using a pre-fab material instance here:

![Imgur](https://i.imgur.com/7Fo6s1Z.png)

* Another example, a pre-fab particle is included you could use as a power station effect:

![Imgur](https://i.imgur.com/UDe8Vsg.png)

* If you instead wanted to use your own material(s), create them in the <b>Campaign Content</b> folder, and then use it on a pre-fab. It should work. All content in the <b>AscMapKit Content</b> folder is shared with the game runtime. You should even be able to, for example, create material instances that reference base materials inside the <b>AscMapKit Content</b> folder. However, if this doesn't work, [please let me know](mailto:ascentroid@gmail.com) right away.

* I'll be adding more pre-fab asset content to the map kit as it is developed. Eventually, I foresee the community developing and submitting new assets for the map kit as well! Perhaps, in the future, we could even build a completely separate, community asset pack system!

<b>Actors</b>

* Placeable game actors can be found in the <b>AscMapKit C++ Classes</b> folder:

![Imgur](https://i.imgur.com/RITFPYX.png)

<b><i>Player Start Positions</i></b>

* Just drag and drop an <b>AscMapKitPlayerStart</b> from the <b>Player</b> folder. The 3D mesh and white arrow will show which direction the player will be oriented when spawning. You will want to add <b>eight (8)</b> player start positions to your level(s):

![Imgur](https://i.imgur.com/yeQaWEl.png)

<b><i>Powerups</i></b>

* Just drag and drop an <b>AscMapKitPowerupActor</b> from the <b>Powerup</b> folder, and select a <b>Powerup Type</b> from the properties on the right-hand side of the editor:

![Imgur](https://i.imgur.com/4cDPDmm.png)

Tip: copy and paste powerup actors to quickly fill your level(s) with powerup spawn points!

<b><i>Doors</i></b>

* Just drag and drop an <b>AscMapKitDoorActor</b> from the <b>Door</b> folder, and select a <b>Door Type</b> from the properties on the right-hand side of the editor:

![Imgur](https://i.imgur.com/FTtD71H.png)

Tip: there are tons of actor properties you can tweak! Hover your mouse over the property in the editor. They should all be fully documented!

![Imgur](https://i.imgur.com/ltWQUNf.png)

Note: Doors cannot be scaled yet. This may be coming in the future.

<b><i>Environment Areas</i></b>

* Just drag and drop an <b>AscMapKitEnvironmentAreaActor</b> from the <b>Area</b> folder, and select an <b>Environment Area Type</b> from the properties on the right-hand side of the editor:

![Imgur](https://i.imgur.com/R6DeTK6.png)

Tip: power stations are considered environment areas. Just select <b>Power Station without Effects</b> or <b>Power Station with Effects</b> from the <b>Environment Area Type</b> property.

Tip: environment area actors do not have pre-defined visual assets available (other than a power station particle). It's up to you to create/import the visual assets you want to use for things like water, acid, lava, etc. I highly recommend the Cartoon Water Shader (paid): https://www.unrealengine.com/marketplace/en-US/product/cartoon-water-shader

Tip: there are tons of actor properties you can tweak! Hover your mouse over the property in the editor. They should all be fully documented!

<b><i>Powerup Respawn Trigger Volumes</i></b>

* In order for the Ascentroid game runtime to know where and how to respawn powerups, you need to place <b>Powerup Respawn Trigger Volumes</b> in your level(s).

* Just drag and drop an <b>AscMapKitPowerupRespawnTriggerBox</b> from the <b>Powerup</b> folder, and select which <b>Powerups</b> are allowed to spawn in this volume from the properties on the right-hand side of the editor:

![Imgur](https://i.imgur.com/qfYOUrq.png)

Tip: you can create many Powerup Respawn Trigger Volumes in your level(s) and scale them to size to fit your needs. For example, this level has them setup like this:

![Imgur](https://i.imgur.com/Hw3ct9Y.png)

Note: if you don't add Powerup Respawn Trigger Volumes to your level(s), then powerups will <b><i>not</i></b> respawn after despawning in multiplayer!

<b><i>Enemies</i></b>

* Just drag and drop an <b>AscMapKitEnemyActor</b> from the <b>Enemy</b> folder, and select an <b>Enemy Type</b> from the properties on the right-hand side of the editor:

![Imgur](https://i.imgur.com/NSYSdgH.png)

Note: enemies are represented as billboards/sprites in the editor because the static meshes are commercial assets (purchased) and cannot not be distributed in the map kit. If you would like to modify properties like <i>colors</i>, they are displayed on the cube and sphere meshes attached to the map kit actor (so you can preview them while working).

Note: at the time of this writing, single player and cooperative game modes are still under heavy development, so a lot of properties related to enemies are still in progress. Some of them may not even be functional.

Tip: there are tons of actor properties you can tweak! Hover your mouse over the property in the editor. They should all be fully documented!

<b><i>Summary</i></b>

It's important to remember, in general, that not all actor properties are enabled/functional yet. All properties and behaviors are subject to change as development of the map kit progresses.

If you have any questions about the map kit content, properties, etc, please [email me](mailto:ascentroid@gmail.com), or find me on the [Ascentroid Discord](https://discord.gg/pktfw78).

<br/><br/><br/>

### <a name="performance-optimization"></a>Keep in mind performance/optimization

* <b><i><u>Use baked lighting</u></i></b>. Avoid full dynamic lighting. What I've learned to do is to use full dynamic lighting while developing a level and testing it out. When I get close to finishing a level, I will switch all of the lighting from dynamic to baked. When ready for production, I'll change the <b>Lighting Quality</b> to <b>Production</b>, and change all of my static mesh asset's <b>Lightmap Resolutions</b> to <b>1024</b> (or higher). <i>Caution</i>: baking lights requires lightmap UVs to be setup on your static meshes, and none of them can be overlapping. Different kinds of [3D Tools](#3d-tools) handle this by placing the lightmap UVs on a separate channel. Due to the subjective nature of this process, you will have to handle this on your own. You should be able to find tutorials on [YouTube](https://www.youtube.com/results?search_query=UE+blender+lightmap) to figure out how to do this.

* If possible, use [Instanced Static Meshes](https://www.google.com/search?q=UE+instanced+static+mesh+site%3Aanswers.unrealengine.com) and/or [Hierarchical Instanced Static Meshes (HISM)](https://www.google.com/search?q=UE+hierarchical+instanced+static+mesh+site:answers.unrealengine.com). You can do [amazing optimizations](https://www.youtube.com/watch?v=oMIbV2rQO4k) using these techniques/tools:

![Imgur](https://i.imgur.com/QrXhiMB.jpg)

* If you are going to use high-poly 3D meshes, I recommend learning how to setup LOD groups. Here is a tutorial: https://www.youtube.com/watch?v=li5qraDIZIM

* If your level static meshes are high-poly, it would be a good idea to break them apart into several smaller mesh pieces (instead of one big mesh). If you are using per-poly collision for your level mesh, a giant mesh will require more computation and likely affect game performance. Smaller meshes should perform better. However, if your level is small and doesn't have many polygons, a single mesh is probably fine. You will have to test it out and decide for yourself.

* If you have more performance/optimization tips you'd like added, please [email me](mailto:ascentroid@gmail.com), or find me on the [Ascentroid Discord](https://discord.gg/pktfw78).

<br/><br/><br/>

#### Scripting is possible, however...

Currently, most scripting capabilities will only run on the client and are not replicated in multiplayer (except in the case where Ascentroid map kit actors send explicit network commands).

Eventually, Ascentroid map kit actors will have events you can attach to in order to perform client-side scripting operations. This is still <i>highly experimental</i>, but here is an example of an event emitted by an Ascentroid map kit trigger actor using [Blueprints](https://docs.unrealengine.com/en-US/ProgrammingAndScripting/Blueprints/GettingStarted/index.html):

![Imgur](https://i.imgur.com/gj43Q9X.png)

When this trigger is deactivated, it will change the visibility of a few static meshes in the level, and spawn some particles. It opens up a secret area in the map, and spawns a grate mesh.

This Blueprint is embedded entirely in the <b>Campaign Content</b> and considered client-side scripting.

The trigger deactivation <i>is</i> an explicit network command sent by the Ascentroid map kit trigger actor, so all of the clients in the game scripts will operate in the same way.

In the future, I may add generic [RPC-like](https://en.wikipedia.org/wiki/Remote_procedure_call) features for Blueprint-only network communication (depending on how things go).

Lastly, <i>only</i> Blueprints scripting is supported. Ascentroid does not yet support scripting in C++. This is still being researched.

<br/><br/><br/>

## Demo Campaign Project

A UE demo campaign project has been created, which you can download and inspect for learning purposes. It includes three levels and various free content sources. Be sure to read the included <b>Readme.txt</b> file.

Download the UE demo campaign project zip file from here:
https://drive.google.com/file/d/1zlutTZXBK4Vy-YLGeMa7izCC1L5hhVVt/view?usp=sharing

![Imgur](https://i.imgur.com/Wr0BNjx.png)

![Imgur](https://i.imgur.com/wpUXtgC.png)

![Imgur](https://i.imgur.com/mYw42eb.png)

<br/><br/><br/>

## Template Campaign Project

A UE template campaign project has been created, which you can download and open, then copy and paste assets from into your own campaign! Just have both projects open and you can copy and paste (CTRL+C, CTRL+V) assets from one level to the other seamlessly. Just remember to adjust locations and settings of the assets for your own campaign. Be sure not to delete anything out of the template campaign, or change/save it. If you do, you may have to delete it and re-download it again.

Download the UE template campaign project zip file from here:
https://drive.google.com/file/d/1jskTpWxB0KLx1hdVMsVNNXpgbg1ElNax/view?usp=share_link

![Imgur](https://i.imgur.com/wUVscgY.png)

<br/><br/><br/>

## <a name="faq"></a>FAQ

Where can I learn more about the game?

`See: ` https://ascentroid.com/faq.html

How do I handle different game modes?

`Ascentroid currently only has one game mode: deathmatch. When that changes, this documentation will be updated.`

How do I handle single player versus multiplayer?

`Currently, you can run campaigns in either mode (no restrictions). However, cooperative does not work. All enemies will run client-side and are not replicated in multiplayer (yet).`

Why don't you have more pre-defined assets we can use?

`This is a solo indie game development effort, currently without funding.`

Why is it so difficult to convert levels from other games?

`Well, this is a solo indie game development effort, currently without funding.`

Why do I have to use 3D tools to build maps? Why didn't you build something easier for people?

`UE is capable to doing a lot out-of-the-box, however, this means you have to put in the effort and learn how to do things yourself. To get started quickly, I highly recommend using ` [SuperGrid](#supergrid)

Why is the setup so complicated?

`It depends on your capabilities. When testing the setup utility, Blarget2 was up and running with his first campaign in about 15 minutes. If you are not technically capable, you probably shouldn't be trying to make campaigns in Ascentroid.`

Is there a reactor?

`No. Single player and cooperative game modes have yet to be developed.`

Is there an escape tunnel?

`Well, no. Single player and cooperative game modes have yet to be developed.`

Do campaigns/levels auto-download if other players don't have them?

`Currently, no. You have to send the file(s) to other players manually. If this changes, I will update this documentation.`

How can I setup my campaign to transition between levels?

`This is not supported yet. It should be coming in the future. However, currently, you can select individual levels in a campaign when starting a single player game, or when hosting a new multiplayer game.`

Can I contribute to the map kit to provide more pre-fab asset content?

`Maybe! Let's chat! See: ` [Contact](#contact)

Why does the Ascentroid map kit limit modding abilities?

`Because I'm learning how to do this stuff while working on this project. Depending on how much effort it will take, and where the direction of the project goes, I may expand what it is capable of. For now, it is limited.`

I have more questions, what should I do?

`See:` [Contact](#contact)

<br/><br/><br/>

## Version Control

You should keep your UE campaign projects saved somewhere!

I highly recommend something like [Git](https://git-scm.com/book/en/v2/Getting-Started-What-is-Git%3F) (with [LFS enabled](https://git-lfs.github.com/)) (and [learning it](https://www.udemy.com/course/intro-to-git/) if you don't know it).

You can setup free accounts with services like [Github](https://github.com/), or [Bitbucket](https://bitbucket.org/product).

Alternatively, you could setup a local Git server using something like [Bonobo Git Server](https://bonobogitserver.com/).

You could also use [Linux](https://www.linux.com/training-tutorials/how-run-your-own-git-server/) to host a Git server.

At the bare minimum, using something as simple as [Google Drive](https://www.google.com/intl/en_jm/drive/), [OneDrive](https://office.live.com/start/onedrive.aspx) and/or [Backblaze](https://www.backblaze.com/) would be a good idea.

You decide.

Note: when Ascentroid gets updated, sometimes I have to upgrade <i><u>UE core engine versions</u></i>. This will impact the Ascentroid map kit, <b>and your campaign project(s)</b>! Keep your campaign projects backed up <i>somewhere</i>, because you will be required to go through these upgrades in the future, too, if you want your maps to be compatible with upgrades! I don't have all the details on how this will work yet, but when I do, I'll be adding more information to this documentation. The main thing is, for now: keep your campaign projects backed up!

<br/><br/><br/>

## Acknowledgments

* Special thanks to <b>Diamond Wolf</b> for contributing a lot of feedback on the map kit while it was being developed. A lot of his ideas were incorporated into what you see. He also made the level in the campaign <b>Rubicon</b>, which was the first community-based level imported into Ascentroid using the map kit.
* Special thanks to <b>[Blarget2](https://www.twitch.tv/blarget2)</b> for testing out the [Ascentroid Map Kit Setup Utility](https://github.com/Ascentroid/Ascentroid/blob/latest-stable/MapKit/Setup/AscMapKitSetup.zip), and being the first person to start using the map kit.

## <a name="contact"></a>Contact

Please email me at [ascentroid@gmail.com](mailto:ascentroid@gmail.com), or find me on the [Ascentroid Discord](https://discord.gg/pktfw78). My online handle is <b>Verran</b>.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.