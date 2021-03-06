/***************************************************************
 * Name:      MazePathMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2022-02-22
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef MAZEPATHMAIN_H
#define MAZEPATHMAIN_H

//(*Headers(MazePathFrame)
#include <wx/button.h>
#include <wx/choice.h>
#include <wx/frame.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
//*)

class MazePathFrame: public wxFrame
{
    public:

        MazePathFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~MazePathFrame();

    private:

        //(*Handlers(MazePathFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnPanel3MouseEnter(wxMouseEvent& event);
        void OnPanel8Paint(wxPaintEvent& event);
        void OnButton2Click(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnButton3Click(wxCommandEvent& event);
        void OnPanel85Paint(wxPaintEvent& event);
        void OnPanel135Paint(wxPaintEvent& event);
        void ClearMaze(wxCommandEvent& event);
        void CreateMaze(wxCommandEvent& event);
        void FindPath(wxCommandEvent& event);
        //*)

        //(*Identifiers(MazePathFrame)
        static const long ID_PANEL3;
        static const long ID_PANEL4;
        static const long ID_PANEL5;
        static const long ID_PANEL6;
        static const long ID_PANEL7;
        static const long ID_PANEL8;
        static const long ID_PANEL9;
        static const long ID_PANEL10;
        static const long ID_PANEL11;
        static const long ID_PANEL12;
        static const long ID_PANEL13;
        static const long ID_PANEL14;
        static const long ID_PANEL15;
        static const long ID_PANEL16;
        static const long ID_PANEL17;
        static const long ID_PANEL18;
        static const long ID_PANEL19;
        static const long ID_PANEL20;
        static const long ID_PANEL21;
        static const long ID_PANEL22;
        static const long ID_PANEL23;
        static const long ID_PANEL24;
        static const long ID_PANEL25;
        static const long ID_PANEL26;
        static const long ID_PANEL27;
        static const long ID_PANEL28;
        static const long ID_PANEL29;
        static const long ID_PANEL30;
        static const long ID_PANEL31;
        static const long ID_PANEL32;
        static const long ID_PANEL33;
        static const long ID_PANEL34;
        static const long ID_PANEL35;
        static const long ID_PANEL36;
        static const long ID_PANEL37;
        static const long ID_PANEL38;
        static const long ID_PANEL39;
        static const long ID_PANEL40;
        static const long ID_PANEL41;
        static const long ID_PANEL42;
        static const long ID_PANEL43;
        static const long ID_PANEL44;
        static const long ID_PANEL45;
        static const long ID_PANEL46;
        static const long ID_PANEL47;
        static const long ID_PANEL48;
        static const long ID_PANEL49;
        static const long ID_PANEL50;
        static const long ID_PANEL51;
        static const long ID_PANEL52;
        static const long ID_PANEL53;
        static const long ID_PANEL54;
        static const long ID_PANEL55;
        static const long ID_PANEL56;
        static const long ID_PANEL57;
        static const long ID_PANEL58;
        static const long ID_PANEL59;
        static const long ID_PANEL60;
        static const long ID_PANEL61;
        static const long ID_PANEL62;
        static const long ID_PANEL63;
        static const long ID_PANEL64;
        static const long ID_PANEL65;
        static const long ID_PANEL66;
        static const long ID_PANEL67;
        static const long ID_PANEL68;
        static const long ID_PANEL69;
        static const long ID_PANEL70;
        static const long ID_PANEL71;
        static const long ID_PANEL72;
        static const long ID_PANEL73;
        static const long ID_PANEL74;
        static const long ID_PANEL75;
        static const long ID_PANEL76;
        static const long ID_PANEL77;
        static const long ID_PANEL78;
        static const long ID_PANEL79;
        static const long ID_PANEL80;
        static const long ID_PANEL81;
        static const long ID_PANEL82;
        static const long ID_PANEL83;
        static const long ID_PANEL84;
        static const long ID_PANEL85;
        static const long ID_PANEL86;
        static const long ID_PANEL87;
        static const long ID_PANEL88;
        static const long ID_PANEL89;
        static const long ID_PANEL90;
        static const long ID_PANEL91;
        static const long ID_PANEL92;
        static const long ID_PANEL93;
        static const long ID_PANEL94;
        static const long ID_PANEL95;
        static const long ID_PANEL96;
        static const long ID_PANEL97;
        static const long ID_PANEL98;
        static const long ID_PANEL99;
        static const long ID_PANEL100;
        static const long ID_PANEL101;
        static const long ID_PANEL102;
        static const long ID_PANEL103;
        static const long ID_PANEL104;
        static const long ID_PANEL105;
        static const long ID_PANEL106;
        static const long ID_PANEL107;
        static const long ID_PANEL108;
        static const long ID_PANEL109;
        static const long ID_PANEL110;
        static const long ID_PANEL111;
        static const long ID_PANEL112;
        static const long ID_PANEL113;
        static const long ID_PANEL114;
        static const long ID_PANEL115;
        static const long ID_PANEL116;
        static const long ID_PANEL117;
        static const long ID_PANEL118;
        static const long ID_PANEL119;
        static const long ID_PANEL120;
        static const long ID_PANEL121;
        static const long ID_PANEL122;
        static const long ID_PANEL123;
        static const long ID_PANEL124;
        static const long ID_PANEL125;
        static const long ID_PANEL126;
        static const long ID_PANEL127;
        static const long ID_PANEL128;
        static const long ID_PANEL129;
        static const long ID_PANEL130;
        static const long ID_PANEL131;
        static const long ID_PANEL132;
        static const long ID_PANEL133;
        static const long ID_PANEL134;
        static const long ID_PANEL135;
        static const long ID_PANEL136;
        static const long ID_PANEL137;
        static const long ID_PANEL138;
        static const long ID_PANEL139;
        static const long ID_PANEL140;
        static const long ID_PANEL141;
        static const long ID_PANEL142;
        static const long ID_PANEL143;
        static const long ID_PANEL144;
        static const long ID_PANEL145;
        static const long ID_PANEL146;
        static const long ID_PANEL147;
        static const long ID_PANEL148;
        static const long ID_PANEL149;
        static const long ID_PANEL150;
        static const long ID_PANEL151;
        static const long ID_PANEL152;
        static const long ID_PANEL153;
        static const long ID_PANEL154;
        static const long ID_PANEL155;
        static const long ID_PANEL156;
        static const long ID_PANEL157;
        static const long ID_PANEL158;
        static const long ID_PANEL159;
        static const long ID_PANEL160;
        static const long ID_PANEL161;
        static const long ID_PANEL162;
        static const long ID_PANEL163;
        static const long ID_PANEL164;
        static const long ID_PANEL165;
        static const long ID_PANEL166;
        static const long ID_PANEL167;
        static const long ID_PANEL168;
        static const long ID_PANEL169;
        static const long ID_PANEL170;
        static const long ID_PANEL171;
        static const long ID_PANEL172;
        static const long ID_PANEL173;
        static const long ID_PANEL174;
        static const long ID_PANEL175;
        static const long ID_PANEL176;
        static const long ID_PANEL177;
        static const long ID_PANEL178;
        static const long ID_PANEL179;
        static const long ID_PANEL180;
        static const long ID_PANEL181;
        static const long ID_PANEL182;
        static const long ID_PANEL183;
        static const long ID_PANEL184;
        static const long ID_PANEL185;
        static const long ID_PANEL186;
        static const long ID_PANEL187;
        static const long ID_PANEL188;
        static const long ID_PANEL189;
        static const long ID_PANEL190;
        static const long ID_PANEL191;
        static const long ID_PANEL192;
        static const long ID_PANEL193;
        static const long ID_PANEL194;
        static const long ID_PANEL195;
        static const long ID_PANEL196;
        static const long ID_PANEL197;
        static const long ID_PANEL198;
        static const long ID_PANEL199;
        static const long ID_PANEL200;
        static const long ID_PANEL201;
        static const long ID_PANEL202;
        static const long ID_PANEL203;
        static const long ID_PANEL204;
        static const long ID_PANEL205;
        static const long ID_PANEL206;
        static const long ID_PANEL207;
        static const long ID_PANEL208;
        static const long ID_PANEL209;
        static const long ID_PANEL210;
        static const long ID_PANEL211;
        static const long ID_PANEL212;
        static const long ID_PANEL213;
        static const long ID_PANEL214;
        static const long ID_PANEL215;
        static const long ID_PANEL216;
        static const long ID_PANEL217;
        static const long ID_PANEL218;
        static const long ID_PANEL219;
        static const long ID_PANEL220;
        static const long ID_PANEL221;
        static const long ID_PANEL222;
        static const long ID_PANEL223;
        static const long ID_PANEL224;
        static const long ID_PANEL225;
        static const long ID_PANEL226;
        static const long ID_PANEL227;
        static const long ID_PANEL228;
        static const long ID_PANEL229;
        static const long ID_PANEL230;
        static const long ID_PANEL231;
        static const long ID_PANEL232;
        static const long ID_PANEL233;
        static const long ID_PANEL234;
        static const long ID_PANEL235;
        static const long ID_PANEL236;
        static const long ID_PANEL237;
        static const long ID_PANEL238;
        static const long ID_PANEL239;
        static const long ID_PANEL240;
        static const long ID_PANEL241;
        static const long ID_PANEL242;
        static const long ID_PANEL243;
        static const long ID_PANEL244;
        static const long ID_PANEL245;
        static const long ID_PANEL246;
        static const long ID_PANEL247;
        static const long ID_PANEL248;
        static const long ID_PANEL249;
        static const long ID_PANEL250;
        static const long ID_PANEL251;
        static const long ID_PANEL252;
        static const long ID_PANEL253;
        static const long ID_PANEL254;
        static const long ID_PANEL255;
        static const long ID_PANEL256;
        static const long ID_PANEL257;
        static const long ID_PANEL258;
        static const long ID_PANEL259;
        static const long ID_PANEL260;
        static const long ID_PANEL261;
        static const long ID_PANEL262;
        static const long ID_PANEL263;
        static const long ID_PANEL264;
        static const long ID_PANEL265;
        static const long ID_PANEL266;
        static const long ID_PANEL267;
        static const long ID_PANEL268;
        static const long ID_PANEL269;
        static const long ID_PANEL270;
        static const long ID_PANEL271;
        static const long ID_PANEL272;
        static const long ID_PANEL273;
        static const long ID_PANEL274;
        static const long ID_PANEL275;
        static const long ID_PANEL276;
        static const long ID_PANEL277;
        static const long ID_PANEL278;
        static const long ID_PANEL279;
        static const long ID_PANEL280;
        static const long ID_PANEL281;
        static const long ID_PANEL282;
        static const long ID_PANEL283;
        static const long ID_PANEL284;
        static const long ID_PANEL285;
        static const long ID_PANEL286;
        static const long ID_PANEL287;
        static const long ID_PANEL288;
        static const long ID_PANEL289;
        static const long ID_PANEL290;
        static const long ID_PANEL291;
        static const long ID_PANEL292;
        static const long ID_PANEL293;
        static const long ID_PANEL294;
        static const long ID_PANEL295;
        static const long ID_PANEL296;
        static const long ID_PANEL297;
        static const long ID_PANEL298;
        static const long ID_PANEL299;
        static const long ID_PANEL300;
        static const long ID_PANEL301;
        static const long ID_PANEL302;
        static const long ID_PANEL303;
        static const long ID_PANEL304;
        static const long ID_PANEL305;
        static const long ID_PANEL306;
        static const long ID_PANEL307;
        static const long ID_PANEL308;
        static const long ID_PANEL309;
        static const long ID_PANEL310;
        static const long ID_PANEL311;
        static const long ID_PANEL312;
        static const long ID_PANEL313;
        static const long ID_PANEL314;
        static const long ID_PANEL315;
        static const long ID_PANEL316;
        static const long ID_PANEL317;
        static const long ID_PANEL318;
        static const long ID_PANEL319;
        static const long ID_PANEL320;
        static const long ID_PANEL321;
        static const long ID_PANEL322;
        static const long ID_PANEL323;
        static const long ID_PANEL324;
        static const long ID_PANEL325;
        static const long ID_PANEL326;
        static const long ID_PANEL327;
        static const long ID_PANEL328;
        static const long ID_PANEL329;
        static const long ID_PANEL330;
        static const long ID_PANEL331;
        static const long ID_PANEL332;
        static const long ID_PANEL333;
        static const long ID_PANEL334;
        static const long ID_PANEL335;
        static const long ID_PANEL336;
        static const long ID_PANEL337;
        static const long ID_PANEL338;
        static const long ID_PANEL339;
        static const long ID_PANEL340;
        static const long ID_PANEL341;
        static const long ID_PANEL342;
        static const long ID_PANEL343;
        static const long ID_PANEL344;
        static const long ID_PANEL345;
        static const long ID_PANEL346;
        static const long ID_PANEL347;
        static const long ID_PANEL348;
        static const long ID_PANEL349;
        static const long ID_PANEL350;
        static const long ID_PANEL351;
        static const long ID_PANEL352;
        static const long ID_PANEL353;
        static const long ID_PANEL354;
        static const long ID_PANEL355;
        static const long ID_PANEL356;
        static const long ID_PANEL357;
        static const long ID_PANEL358;
        static const long ID_PANEL359;
        static const long ID_PANEL360;
        static const long ID_PANEL361;
        static const long ID_PANEL362;
        static const long ID_PANEL363;
        static const long ID_PANEL364;
        static const long ID_PANEL365;
        static const long ID_PANEL366;
        static const long ID_PANEL367;
        static const long ID_PANEL368;
        static const long ID_PANEL369;
        static const long ID_PANEL370;
        static const long ID_PANEL371;
        static const long ID_PANEL372;
        static const long ID_PANEL373;
        static const long ID_PANEL374;
        static const long ID_PANEL375;
        static const long ID_PANEL376;
        static const long ID_PANEL377;
        static const long ID_PANEL378;
        static const long ID_PANEL379;
        static const long ID_PANEL380;
        static const long ID_PANEL381;
        static const long ID_PANEL382;
        static const long ID_PANEL383;
        static const long ID_PANEL384;
        static const long ID_PANEL385;
        static const long ID_PANEL386;
        static const long ID_PANEL387;
        static const long ID_PANEL388;
        static const long ID_PANEL389;
        static const long ID_PANEL390;
        static const long ID_PANEL391;
        static const long ID_PANEL392;
        static const long ID_PANEL393;
        static const long ID_PANEL394;
        static const long ID_PANEL395;
        static const long ID_PANEL396;
        static const long ID_PANEL397;
        static const long ID_PANEL398;
        static const long ID_PANEL399;
        static const long ID_PANEL400;
        static const long ID_PANEL401;
        static const long ID_PANEL402;
        static const long ID_PANEL403;
        static const long ID_PANEL404;
        static const long ID_PANEL405;
        static const long ID_PANEL406;
        static const long ID_PANEL407;
        static const long ID_PANEL408;
        static const long ID_PANEL409;
        static const long ID_PANEL410;
        static const long ID_PANEL411;
        static const long ID_PANEL412;
        static const long ID_PANEL413;
        static const long ID_PANEL414;
        static const long ID_PANEL415;
        static const long ID_PANEL416;
        static const long ID_PANEL417;
        static const long ID_PANEL418;
        static const long ID_PANEL419;
        static const long ID_PANEL420;
        static const long ID_PANEL421;
        static const long ID_PANEL422;
        static const long ID_PANEL423;
        static const long ID_PANEL424;
        static const long ID_PANEL425;
        static const long ID_PANEL426;
        static const long ID_PANEL427;
        static const long ID_PANEL428;
        static const long ID_PANEL429;
        static const long ID_PANEL430;
        static const long ID_PANEL431;
        static const long ID_PANEL432;
        static const long ID_PANEL433;
        static const long ID_PANEL434;
        static const long ID_PANEL435;
        static const long ID_PANEL436;
        static const long ID_PANEL437;
        static const long ID_PANEL438;
        static const long ID_PANEL439;
        static const long ID_PANEL440;
        static const long ID_PANEL441;
        static const long ID_PANEL442;
        static const long ID_PANEL443;
        static const long ID_PANEL1;
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON3;
        static const long ID_STATICTEXT1;
        static const long ID_CHOICE1;
        static const long ID_CHOICE2;
        static const long ID_PANEL2;
        //*)

        //(*Declarations(MazePathFrame)
        wxButton* Button1;
        wxButton* Button2;
        wxButton* Button3;
        wxChoice* Maze;
        wxChoice* Path;
        wxPanel* Panel100;
        wxPanel* Panel101;
        wxPanel* Panel102;
        wxPanel* Panel103;
        wxPanel* Panel104;
        wxPanel* Panel105;
        wxPanel* Panel106;
        wxPanel* Panel107;
        wxPanel* Panel108;
        wxPanel* Panel109;
        wxPanel* Panel10;
        wxPanel* Panel110;
        wxPanel* Panel111;
        wxPanel* Panel112;
        wxPanel* Panel113;
        wxPanel* Panel114;
        wxPanel* Panel115;
        wxPanel* Panel116;
        wxPanel* Panel117;
        wxPanel* Panel118;
        wxPanel* Panel119;
        wxPanel* Panel11;
        wxPanel* Panel120;
        wxPanel* Panel121;
        wxPanel* Panel122;
        wxPanel* Panel123;
        wxPanel* Panel124;
        wxPanel* Panel125;
        wxPanel* Panel126;
        wxPanel* Panel127;
        wxPanel* Panel128;
        wxPanel* Panel129;
        wxPanel* Panel12;
        wxPanel* Panel130;
        wxPanel* Panel131;
        wxPanel* Panel132;
        wxPanel* Panel133;
        wxPanel* Panel134;
        wxPanel* Panel135;
        wxPanel* Panel136;
        wxPanel* Panel137;
        wxPanel* Panel138;
        wxPanel* Panel139;
        wxPanel* Panel13;
        wxPanel* Panel140;
        wxPanel* Panel141;
        wxPanel* Panel142;
        wxPanel* Panel143;
        wxPanel* Panel144;
        wxPanel* Panel145;
        wxPanel* Panel146;
        wxPanel* Panel147;
        wxPanel* Panel148;
        wxPanel* Panel149;
        wxPanel* Panel14;
        wxPanel* Panel150;
        wxPanel* Panel151;
        wxPanel* Panel152;
        wxPanel* Panel153;
        wxPanel* Panel154;
        wxPanel* Panel155;
        wxPanel* Panel156;
        wxPanel* Panel157;
        wxPanel* Panel158;
        wxPanel* Panel159;
        wxPanel* Panel15;
        wxPanel* Panel160;
        wxPanel* Panel161;
        wxPanel* Panel162;
        wxPanel* Panel163;
        wxPanel* Panel164;
        wxPanel* Panel165;
        wxPanel* Panel166;
        wxPanel* Panel167;
        wxPanel* Panel168;
        wxPanel* Panel169;
        wxPanel* Panel16;
        wxPanel* Panel170;
        wxPanel* Panel171;
        wxPanel* Panel172;
        wxPanel* Panel173;
        wxPanel* Panel174;
        wxPanel* Panel175;
        wxPanel* Panel176;
        wxPanel* Panel177;
        wxPanel* Panel178;
        wxPanel* Panel179;
        wxPanel* Panel17;
        wxPanel* Panel180;
        wxPanel* Panel181;
        wxPanel* Panel182;
        wxPanel* Panel183;
        wxPanel* Panel184;
        wxPanel* Panel185;
        wxPanel* Panel186;
        wxPanel* Panel187;
        wxPanel* Panel188;
        wxPanel* Panel189;
        wxPanel* Panel18;
        wxPanel* Panel190;
        wxPanel* Panel191;
        wxPanel* Panel192;
        wxPanel* Panel193;
        wxPanel* Panel194;
        wxPanel* Panel195;
        wxPanel* Panel196;
        wxPanel* Panel197;
        wxPanel* Panel198;
        wxPanel* Panel199;
        wxPanel* Panel19;
        wxPanel* Panel1;
        wxPanel* Panel200;
        wxPanel* Panel201;
        wxPanel* Panel202;
        wxPanel* Panel203;
        wxPanel* Panel204;
        wxPanel* Panel205;
        wxPanel* Panel206;
        wxPanel* Panel207;
        wxPanel* Panel208;
        wxPanel* Panel209;
        wxPanel* Panel20;
        wxPanel* Panel210;
        wxPanel* Panel211;
        wxPanel* Panel212;
        wxPanel* Panel213;
        wxPanel* Panel214;
        wxPanel* Panel215;
        wxPanel* Panel216;
        wxPanel* Panel217;
        wxPanel* Panel218;
        wxPanel* Panel219;
        wxPanel* Panel21;
        wxPanel* Panel220;
        wxPanel* Panel221;
        wxPanel* Panel222;
        wxPanel* Panel223;
        wxPanel* Panel224;
        wxPanel* Panel225;
        wxPanel* Panel226;
        wxPanel* Panel227;
        wxPanel* Panel228;
        wxPanel* Panel229;
        wxPanel* Panel22;
        wxPanel* Panel230;
        wxPanel* Panel231;
        wxPanel* Panel232;
        wxPanel* Panel233;
        wxPanel* Panel234;
        wxPanel* Panel235;
        wxPanel* Panel236;
        wxPanel* Panel237;
        wxPanel* Panel238;
        wxPanel* Panel239;
        wxPanel* Panel23;
        wxPanel* Panel240;
        wxPanel* Panel241;
        wxPanel* Panel242;
        wxPanel* Panel243;
        wxPanel* Panel244;
        wxPanel* Panel245;
        wxPanel* Panel246;
        wxPanel* Panel247;
        wxPanel* Panel248;
        wxPanel* Panel249;
        wxPanel* Panel24;
        wxPanel* Panel250;
        wxPanel* Panel251;
        wxPanel* Panel252;
        wxPanel* Panel253;
        wxPanel* Panel254;
        wxPanel* Panel255;
        wxPanel* Panel256;
        wxPanel* Panel257;
        wxPanel* Panel258;
        wxPanel* Panel259;
        wxPanel* Panel25;
        wxPanel* Panel260;
        wxPanel* Panel261;
        wxPanel* Panel262;
        wxPanel* Panel263;
        wxPanel* Panel264;
        wxPanel* Panel265;
        wxPanel* Panel266;
        wxPanel* Panel267;
        wxPanel* Panel268;
        wxPanel* Panel269;
        wxPanel* Panel26;
        wxPanel* Panel270;
        wxPanel* Panel271;
        wxPanel* Panel272;
        wxPanel* Panel273;
        wxPanel* Panel274;
        wxPanel* Panel275;
        wxPanel* Panel276;
        wxPanel* Panel277;
        wxPanel* Panel278;
        wxPanel* Panel279;
        wxPanel* Panel27;
        wxPanel* Panel280;
        wxPanel* Panel281;
        wxPanel* Panel282;
        wxPanel* Panel283;
        wxPanel* Panel284;
        wxPanel* Panel285;
        wxPanel* Panel286;
        wxPanel* Panel287;
        wxPanel* Panel288;
        wxPanel* Panel289;
        wxPanel* Panel28;
        wxPanel* Panel290;
        wxPanel* Panel291;
        wxPanel* Panel292;
        wxPanel* Panel293;
        wxPanel* Panel294;
        wxPanel* Panel295;
        wxPanel* Panel296;
        wxPanel* Panel297;
        wxPanel* Panel298;
        wxPanel* Panel299;
        wxPanel* Panel29;
        wxPanel* Panel2;
        wxPanel* Panel300;
        wxPanel* Panel301;
        wxPanel* Panel302;
        wxPanel* Panel303;
        wxPanel* Panel304;
        wxPanel* Panel305;
        wxPanel* Panel306;
        wxPanel* Panel307;
        wxPanel* Panel308;
        wxPanel* Panel309;
        wxPanel* Panel30;
        wxPanel* Panel310;
        wxPanel* Panel311;
        wxPanel* Panel312;
        wxPanel* Panel313;
        wxPanel* Panel314;
        wxPanel* Panel315;
        wxPanel* Panel316;
        wxPanel* Panel317;
        wxPanel* Panel318;
        wxPanel* Panel319;
        wxPanel* Panel31;
        wxPanel* Panel320;
        wxPanel* Panel321;
        wxPanel* Panel322;
        wxPanel* Panel323;
        wxPanel* Panel324;
        wxPanel* Panel325;
        wxPanel* Panel326;
        wxPanel* Panel327;
        wxPanel* Panel328;
        wxPanel* Panel329;
        wxPanel* Panel32;
        wxPanel* Panel330;
        wxPanel* Panel331;
        wxPanel* Panel332;
        wxPanel* Panel333;
        wxPanel* Panel334;
        wxPanel* Panel335;
        wxPanel* Panel336;
        wxPanel* Panel337;
        wxPanel* Panel338;
        wxPanel* Panel339;
        wxPanel* Panel33;
        wxPanel* Panel340;
        wxPanel* Panel341;
        wxPanel* Panel342;
        wxPanel* Panel343;
        wxPanel* Panel344;
        wxPanel* Panel345;
        wxPanel* Panel346;
        wxPanel* Panel347;
        wxPanel* Panel348;
        wxPanel* Panel349;
        wxPanel* Panel34;
        wxPanel* Panel350;
        wxPanel* Panel351;
        wxPanel* Panel352;
        wxPanel* Panel353;
        wxPanel* Panel354;
        wxPanel* Panel355;
        wxPanel* Panel356;
        wxPanel* Panel357;
        wxPanel* Panel358;
        wxPanel* Panel359;
        wxPanel* Panel35;
        wxPanel* Panel360;
        wxPanel* Panel361;
        wxPanel* Panel362;
        wxPanel* Panel363;
        wxPanel* Panel364;
        wxPanel* Panel365;
        wxPanel* Panel366;
        wxPanel* Panel367;
        wxPanel* Panel368;
        wxPanel* Panel369;
        wxPanel* Panel36;
        wxPanel* Panel370;
        wxPanel* Panel371;
        wxPanel* Panel372;
        wxPanel* Panel373;
        wxPanel* Panel374;
        wxPanel* Panel375;
        wxPanel* Panel376;
        wxPanel* Panel377;
        wxPanel* Panel378;
        wxPanel* Panel379;
        wxPanel* Panel37;
        wxPanel* Panel380;
        wxPanel* Panel381;
        wxPanel* Panel382;
        wxPanel* Panel383;
        wxPanel* Panel384;
        wxPanel* Panel385;
        wxPanel* Panel386;
        wxPanel* Panel387;
        wxPanel* Panel388;
        wxPanel* Panel389;
        wxPanel* Panel38;
        wxPanel* Panel390;
        wxPanel* Panel391;
        wxPanel* Panel392;
        wxPanel* Panel393;
        wxPanel* Panel394;
        wxPanel* Panel395;
        wxPanel* Panel396;
        wxPanel* Panel397;
        wxPanel* Panel398;
        wxPanel* Panel399;
        wxPanel* Panel39;
        wxPanel* Panel3;
        wxPanel* Panel400;
        wxPanel* Panel401;
        wxPanel* Panel402;
        wxPanel* Panel403;
        wxPanel* Panel404;
        wxPanel* Panel405;
        wxPanel* Panel406;
        wxPanel* Panel407;
        wxPanel* Panel408;
        wxPanel* Panel409;
        wxPanel* Panel40;
        wxPanel* Panel410;
        wxPanel* Panel411;
        wxPanel* Panel412;
        wxPanel* Panel413;
        wxPanel* Panel414;
        wxPanel* Panel415;
        wxPanel* Panel416;
        wxPanel* Panel417;
        wxPanel* Panel418;
        wxPanel* Panel419;
        wxPanel* Panel41;
        wxPanel* Panel420;
        wxPanel* Panel421;
        wxPanel* Panel422;
        wxPanel* Panel423;
        wxPanel* Panel424;
        wxPanel* Panel425;
        wxPanel* Panel426;
        wxPanel* Panel427;
        wxPanel* Panel428;
        wxPanel* Panel429;
        wxPanel* Panel42;
        wxPanel* Panel430;
        wxPanel* Panel431;
        wxPanel* Panel432;
        wxPanel* Panel433;
        wxPanel* Panel434;
        wxPanel* Panel435;
        wxPanel* Panel436;
        wxPanel* Panel437;
        wxPanel* Panel438;
        wxPanel* Panel439;
        wxPanel* Panel43;
        wxPanel* Panel440;
        wxPanel* Panel441;
        wxPanel* Panel442;
        wxPanel* Panel443;
        wxPanel* Panel44;
        wxPanel* Panel45;
        wxPanel* Panel46;
        wxPanel* Panel47;
        wxPanel* Panel48;
        wxPanel* Panel49;
        wxPanel* Panel4;
        wxPanel* Panel50;
        wxPanel* Panel51;
        wxPanel* Panel52;
        wxPanel* Panel53;
        wxPanel* Panel54;
        wxPanel* Panel55;
        wxPanel* Panel56;
        wxPanel* Panel57;
        wxPanel* Panel58;
        wxPanel* Panel59;
        wxPanel* Panel5;
        wxPanel* Panel60;
        wxPanel* Panel61;
        wxPanel* Panel62;
        wxPanel* Panel63;
        wxPanel* Panel64;
        wxPanel* Panel65;
        wxPanel* Panel66;
        wxPanel* Panel67;
        wxPanel* Panel68;
        wxPanel* Panel69;
        wxPanel* Panel6;
        wxPanel* Panel70;
        wxPanel* Panel71;
        wxPanel* Panel72;
        wxPanel* Panel73;
        wxPanel* Panel74;
        wxPanel* Panel75;
        wxPanel* Panel76;
        wxPanel* Panel77;
        wxPanel* Panel78;
        wxPanel* Panel79;
        wxPanel* Panel7;
        wxPanel* Panel80;
        wxPanel* Panel81;
        wxPanel* Panel82;
        wxPanel* Panel83;
        wxPanel* Panel84;
        wxPanel* Panel85;
        wxPanel* Panel86;
        wxPanel* Panel87;
        wxPanel* Panel88;
        wxPanel* Panel89;
        wxPanel* Panel8;
        wxPanel* Panel90;
        wxPanel* Panel91;
        wxPanel* Panel92;
        wxPanel* Panel93;
        wxPanel* Panel94;
        wxPanel* Panel95;
        wxPanel* Panel96;
        wxPanel* Panel97;
        wxPanel* Panel98;
        wxPanel* Panel99;
        wxPanel* Panel9;
        wxStaticText* StaticText1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // MAZEPATHMAIN_H
