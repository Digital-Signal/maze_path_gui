/***************************************************************
 * Name:      MazePathMain.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2022-02-22
 * Copyright:  ()
 * License:
 **************************************************************/

#include "MazePathMain.h"
#include <wx/msgdlg.h>
#include <iostream>
#include "DFS.h"
#include "BFS.h"
#include "A_star.h"

#include "Randomized_Kruskal_s_Algorithm.h"
#include "Randomized_Prim_s_Algorithm.h"
#include "Recursive_Backtracker.h"
using namespace std;
//(*InternalHeaders(MazePathFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

char maze[21][21] = { {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                      {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                      {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                      {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                      {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                      {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                      {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                      {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                      {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                      {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                      {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                      {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                      {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                      {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                      {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                      {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                      {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                      {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                      {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                      {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                      {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}
                    };
//(*IdInit(MazePathFrame)
const long MazePathFrame::ID_PANEL3 = wxNewId();
const long MazePathFrame::ID_PANEL4 = wxNewId();
const long MazePathFrame::ID_PANEL5 = wxNewId();
const long MazePathFrame::ID_PANEL6 = wxNewId();
const long MazePathFrame::ID_PANEL7 = wxNewId();
const long MazePathFrame::ID_PANEL8 = wxNewId();
const long MazePathFrame::ID_PANEL9 = wxNewId();
const long MazePathFrame::ID_PANEL10 = wxNewId();
const long MazePathFrame::ID_PANEL11 = wxNewId();
const long MazePathFrame::ID_PANEL12 = wxNewId();
const long MazePathFrame::ID_PANEL13 = wxNewId();
const long MazePathFrame::ID_PANEL14 = wxNewId();
const long MazePathFrame::ID_PANEL15 = wxNewId();
const long MazePathFrame::ID_PANEL16 = wxNewId();
const long MazePathFrame::ID_PANEL17 = wxNewId();
const long MazePathFrame::ID_PANEL18 = wxNewId();
const long MazePathFrame::ID_PANEL19 = wxNewId();
const long MazePathFrame::ID_PANEL20 = wxNewId();
const long MazePathFrame::ID_PANEL21 = wxNewId();
const long MazePathFrame::ID_PANEL22 = wxNewId();
const long MazePathFrame::ID_PANEL23 = wxNewId();
const long MazePathFrame::ID_PANEL24 = wxNewId();
const long MazePathFrame::ID_PANEL25 = wxNewId();
const long MazePathFrame::ID_PANEL26 = wxNewId();
const long MazePathFrame::ID_PANEL27 = wxNewId();
const long MazePathFrame::ID_PANEL28 = wxNewId();
const long MazePathFrame::ID_PANEL29 = wxNewId();
const long MazePathFrame::ID_PANEL30 = wxNewId();
const long MazePathFrame::ID_PANEL31 = wxNewId();
const long MazePathFrame::ID_PANEL32 = wxNewId();
const long MazePathFrame::ID_PANEL33 = wxNewId();
const long MazePathFrame::ID_PANEL34 = wxNewId();
const long MazePathFrame::ID_PANEL35 = wxNewId();
const long MazePathFrame::ID_PANEL36 = wxNewId();
const long MazePathFrame::ID_PANEL37 = wxNewId();
const long MazePathFrame::ID_PANEL38 = wxNewId();
const long MazePathFrame::ID_PANEL39 = wxNewId();
const long MazePathFrame::ID_PANEL40 = wxNewId();
const long MazePathFrame::ID_PANEL41 = wxNewId();
const long MazePathFrame::ID_PANEL42 = wxNewId();
const long MazePathFrame::ID_PANEL43 = wxNewId();
const long MazePathFrame::ID_PANEL44 = wxNewId();
const long MazePathFrame::ID_PANEL45 = wxNewId();
const long MazePathFrame::ID_PANEL46 = wxNewId();
const long MazePathFrame::ID_PANEL47 = wxNewId();
const long MazePathFrame::ID_PANEL48 = wxNewId();
const long MazePathFrame::ID_PANEL49 = wxNewId();
const long MazePathFrame::ID_PANEL50 = wxNewId();
const long MazePathFrame::ID_PANEL51 = wxNewId();
const long MazePathFrame::ID_PANEL52 = wxNewId();
const long MazePathFrame::ID_PANEL53 = wxNewId();
const long MazePathFrame::ID_PANEL54 = wxNewId();
const long MazePathFrame::ID_PANEL55 = wxNewId();
const long MazePathFrame::ID_PANEL56 = wxNewId();
const long MazePathFrame::ID_PANEL57 = wxNewId();
const long MazePathFrame::ID_PANEL58 = wxNewId();
const long MazePathFrame::ID_PANEL59 = wxNewId();
const long MazePathFrame::ID_PANEL60 = wxNewId();
const long MazePathFrame::ID_PANEL61 = wxNewId();
const long MazePathFrame::ID_PANEL62 = wxNewId();
const long MazePathFrame::ID_PANEL63 = wxNewId();
const long MazePathFrame::ID_PANEL64 = wxNewId();
const long MazePathFrame::ID_PANEL65 = wxNewId();
const long MazePathFrame::ID_PANEL66 = wxNewId();
const long MazePathFrame::ID_PANEL67 = wxNewId();
const long MazePathFrame::ID_PANEL68 = wxNewId();
const long MazePathFrame::ID_PANEL69 = wxNewId();
const long MazePathFrame::ID_PANEL70 = wxNewId();
const long MazePathFrame::ID_PANEL71 = wxNewId();
const long MazePathFrame::ID_PANEL72 = wxNewId();
const long MazePathFrame::ID_PANEL73 = wxNewId();
const long MazePathFrame::ID_PANEL74 = wxNewId();
const long MazePathFrame::ID_PANEL75 = wxNewId();
const long MazePathFrame::ID_PANEL76 = wxNewId();
const long MazePathFrame::ID_PANEL77 = wxNewId();
const long MazePathFrame::ID_PANEL78 = wxNewId();
const long MazePathFrame::ID_PANEL79 = wxNewId();
const long MazePathFrame::ID_PANEL80 = wxNewId();
const long MazePathFrame::ID_PANEL81 = wxNewId();
const long MazePathFrame::ID_PANEL82 = wxNewId();
const long MazePathFrame::ID_PANEL83 = wxNewId();
const long MazePathFrame::ID_PANEL84 = wxNewId();
const long MazePathFrame::ID_PANEL85 = wxNewId();
const long MazePathFrame::ID_PANEL86 = wxNewId();
const long MazePathFrame::ID_PANEL87 = wxNewId();
const long MazePathFrame::ID_PANEL88 = wxNewId();
const long MazePathFrame::ID_PANEL89 = wxNewId();
const long MazePathFrame::ID_PANEL90 = wxNewId();
const long MazePathFrame::ID_PANEL91 = wxNewId();
const long MazePathFrame::ID_PANEL92 = wxNewId();
const long MazePathFrame::ID_PANEL93 = wxNewId();
const long MazePathFrame::ID_PANEL94 = wxNewId();
const long MazePathFrame::ID_PANEL95 = wxNewId();
const long MazePathFrame::ID_PANEL96 = wxNewId();
const long MazePathFrame::ID_PANEL97 = wxNewId();
const long MazePathFrame::ID_PANEL98 = wxNewId();
const long MazePathFrame::ID_PANEL99 = wxNewId();
const long MazePathFrame::ID_PANEL100 = wxNewId();
const long MazePathFrame::ID_PANEL101 = wxNewId();
const long MazePathFrame::ID_PANEL102 = wxNewId();
const long MazePathFrame::ID_PANEL103 = wxNewId();
const long MazePathFrame::ID_PANEL104 = wxNewId();
const long MazePathFrame::ID_PANEL105 = wxNewId();
const long MazePathFrame::ID_PANEL106 = wxNewId();
const long MazePathFrame::ID_PANEL107 = wxNewId();
const long MazePathFrame::ID_PANEL108 = wxNewId();
const long MazePathFrame::ID_PANEL109 = wxNewId();
const long MazePathFrame::ID_PANEL110 = wxNewId();
const long MazePathFrame::ID_PANEL111 = wxNewId();
const long MazePathFrame::ID_PANEL112 = wxNewId();
const long MazePathFrame::ID_PANEL113 = wxNewId();
const long MazePathFrame::ID_PANEL114 = wxNewId();
const long MazePathFrame::ID_PANEL115 = wxNewId();
const long MazePathFrame::ID_PANEL116 = wxNewId();
const long MazePathFrame::ID_PANEL117 = wxNewId();
const long MazePathFrame::ID_PANEL118 = wxNewId();
const long MazePathFrame::ID_PANEL119 = wxNewId();
const long MazePathFrame::ID_PANEL120 = wxNewId();
const long MazePathFrame::ID_PANEL121 = wxNewId();
const long MazePathFrame::ID_PANEL122 = wxNewId();
const long MazePathFrame::ID_PANEL123 = wxNewId();
const long MazePathFrame::ID_PANEL124 = wxNewId();
const long MazePathFrame::ID_PANEL125 = wxNewId();
const long MazePathFrame::ID_PANEL126 = wxNewId();
const long MazePathFrame::ID_PANEL127 = wxNewId();
const long MazePathFrame::ID_PANEL128 = wxNewId();
const long MazePathFrame::ID_PANEL129 = wxNewId();
const long MazePathFrame::ID_PANEL130 = wxNewId();
const long MazePathFrame::ID_PANEL131 = wxNewId();
const long MazePathFrame::ID_PANEL132 = wxNewId();
const long MazePathFrame::ID_PANEL133 = wxNewId();
const long MazePathFrame::ID_PANEL134 = wxNewId();
const long MazePathFrame::ID_PANEL135 = wxNewId();
const long MazePathFrame::ID_PANEL136 = wxNewId();
const long MazePathFrame::ID_PANEL137 = wxNewId();
const long MazePathFrame::ID_PANEL138 = wxNewId();
const long MazePathFrame::ID_PANEL139 = wxNewId();
const long MazePathFrame::ID_PANEL140 = wxNewId();
const long MazePathFrame::ID_PANEL141 = wxNewId();
const long MazePathFrame::ID_PANEL142 = wxNewId();
const long MazePathFrame::ID_PANEL143 = wxNewId();
const long MazePathFrame::ID_PANEL144 = wxNewId();
const long MazePathFrame::ID_PANEL145 = wxNewId();
const long MazePathFrame::ID_PANEL146 = wxNewId();
const long MazePathFrame::ID_PANEL147 = wxNewId();
const long MazePathFrame::ID_PANEL148 = wxNewId();
const long MazePathFrame::ID_PANEL149 = wxNewId();
const long MazePathFrame::ID_PANEL150 = wxNewId();
const long MazePathFrame::ID_PANEL151 = wxNewId();
const long MazePathFrame::ID_PANEL152 = wxNewId();
const long MazePathFrame::ID_PANEL153 = wxNewId();
const long MazePathFrame::ID_PANEL154 = wxNewId();
const long MazePathFrame::ID_PANEL155 = wxNewId();
const long MazePathFrame::ID_PANEL156 = wxNewId();
const long MazePathFrame::ID_PANEL157 = wxNewId();
const long MazePathFrame::ID_PANEL158 = wxNewId();
const long MazePathFrame::ID_PANEL159 = wxNewId();
const long MazePathFrame::ID_PANEL160 = wxNewId();
const long MazePathFrame::ID_PANEL161 = wxNewId();
const long MazePathFrame::ID_PANEL162 = wxNewId();
const long MazePathFrame::ID_PANEL163 = wxNewId();
const long MazePathFrame::ID_PANEL164 = wxNewId();
const long MazePathFrame::ID_PANEL165 = wxNewId();
const long MazePathFrame::ID_PANEL166 = wxNewId();
const long MazePathFrame::ID_PANEL167 = wxNewId();
const long MazePathFrame::ID_PANEL168 = wxNewId();
const long MazePathFrame::ID_PANEL169 = wxNewId();
const long MazePathFrame::ID_PANEL170 = wxNewId();
const long MazePathFrame::ID_PANEL171 = wxNewId();
const long MazePathFrame::ID_PANEL172 = wxNewId();
const long MazePathFrame::ID_PANEL173 = wxNewId();
const long MazePathFrame::ID_PANEL174 = wxNewId();
const long MazePathFrame::ID_PANEL175 = wxNewId();
const long MazePathFrame::ID_PANEL176 = wxNewId();
const long MazePathFrame::ID_PANEL177 = wxNewId();
const long MazePathFrame::ID_PANEL178 = wxNewId();
const long MazePathFrame::ID_PANEL179 = wxNewId();
const long MazePathFrame::ID_PANEL180 = wxNewId();
const long MazePathFrame::ID_PANEL181 = wxNewId();
const long MazePathFrame::ID_PANEL182 = wxNewId();
const long MazePathFrame::ID_PANEL183 = wxNewId();
const long MazePathFrame::ID_PANEL184 = wxNewId();
const long MazePathFrame::ID_PANEL185 = wxNewId();
const long MazePathFrame::ID_PANEL186 = wxNewId();
const long MazePathFrame::ID_PANEL187 = wxNewId();
const long MazePathFrame::ID_PANEL188 = wxNewId();
const long MazePathFrame::ID_PANEL189 = wxNewId();
const long MazePathFrame::ID_PANEL190 = wxNewId();
const long MazePathFrame::ID_PANEL191 = wxNewId();
const long MazePathFrame::ID_PANEL192 = wxNewId();
const long MazePathFrame::ID_PANEL193 = wxNewId();
const long MazePathFrame::ID_PANEL194 = wxNewId();
const long MazePathFrame::ID_PANEL195 = wxNewId();
const long MazePathFrame::ID_PANEL196 = wxNewId();
const long MazePathFrame::ID_PANEL197 = wxNewId();
const long MazePathFrame::ID_PANEL198 = wxNewId();
const long MazePathFrame::ID_PANEL199 = wxNewId();
const long MazePathFrame::ID_PANEL200 = wxNewId();
const long MazePathFrame::ID_PANEL201 = wxNewId();
const long MazePathFrame::ID_PANEL202 = wxNewId();
const long MazePathFrame::ID_PANEL203 = wxNewId();
const long MazePathFrame::ID_PANEL204 = wxNewId();
const long MazePathFrame::ID_PANEL205 = wxNewId();
const long MazePathFrame::ID_PANEL206 = wxNewId();
const long MazePathFrame::ID_PANEL207 = wxNewId();
const long MazePathFrame::ID_PANEL208 = wxNewId();
const long MazePathFrame::ID_PANEL209 = wxNewId();
const long MazePathFrame::ID_PANEL210 = wxNewId();
const long MazePathFrame::ID_PANEL211 = wxNewId();
const long MazePathFrame::ID_PANEL212 = wxNewId();
const long MazePathFrame::ID_PANEL213 = wxNewId();
const long MazePathFrame::ID_PANEL214 = wxNewId();
const long MazePathFrame::ID_PANEL215 = wxNewId();
const long MazePathFrame::ID_PANEL216 = wxNewId();
const long MazePathFrame::ID_PANEL217 = wxNewId();
const long MazePathFrame::ID_PANEL218 = wxNewId();
const long MazePathFrame::ID_PANEL219 = wxNewId();
const long MazePathFrame::ID_PANEL220 = wxNewId();
const long MazePathFrame::ID_PANEL221 = wxNewId();
const long MazePathFrame::ID_PANEL222 = wxNewId();
const long MazePathFrame::ID_PANEL223 = wxNewId();
const long MazePathFrame::ID_PANEL224 = wxNewId();
const long MazePathFrame::ID_PANEL225 = wxNewId();
const long MazePathFrame::ID_PANEL226 = wxNewId();
const long MazePathFrame::ID_PANEL227 = wxNewId();
const long MazePathFrame::ID_PANEL228 = wxNewId();
const long MazePathFrame::ID_PANEL229 = wxNewId();
const long MazePathFrame::ID_PANEL230 = wxNewId();
const long MazePathFrame::ID_PANEL231 = wxNewId();
const long MazePathFrame::ID_PANEL232 = wxNewId();
const long MazePathFrame::ID_PANEL233 = wxNewId();
const long MazePathFrame::ID_PANEL234 = wxNewId();
const long MazePathFrame::ID_PANEL235 = wxNewId();
const long MazePathFrame::ID_PANEL236 = wxNewId();
const long MazePathFrame::ID_PANEL237 = wxNewId();
const long MazePathFrame::ID_PANEL238 = wxNewId();
const long MazePathFrame::ID_PANEL239 = wxNewId();
const long MazePathFrame::ID_PANEL240 = wxNewId();
const long MazePathFrame::ID_PANEL241 = wxNewId();
const long MazePathFrame::ID_PANEL242 = wxNewId();
const long MazePathFrame::ID_PANEL243 = wxNewId();
const long MazePathFrame::ID_PANEL244 = wxNewId();
const long MazePathFrame::ID_PANEL245 = wxNewId();
const long MazePathFrame::ID_PANEL246 = wxNewId();
const long MazePathFrame::ID_PANEL247 = wxNewId();
const long MazePathFrame::ID_PANEL248 = wxNewId();
const long MazePathFrame::ID_PANEL249 = wxNewId();
const long MazePathFrame::ID_PANEL250 = wxNewId();
const long MazePathFrame::ID_PANEL251 = wxNewId();
const long MazePathFrame::ID_PANEL252 = wxNewId();
const long MazePathFrame::ID_PANEL253 = wxNewId();
const long MazePathFrame::ID_PANEL254 = wxNewId();
const long MazePathFrame::ID_PANEL255 = wxNewId();
const long MazePathFrame::ID_PANEL256 = wxNewId();
const long MazePathFrame::ID_PANEL257 = wxNewId();
const long MazePathFrame::ID_PANEL258 = wxNewId();
const long MazePathFrame::ID_PANEL259 = wxNewId();
const long MazePathFrame::ID_PANEL260 = wxNewId();
const long MazePathFrame::ID_PANEL261 = wxNewId();
const long MazePathFrame::ID_PANEL262 = wxNewId();
const long MazePathFrame::ID_PANEL263 = wxNewId();
const long MazePathFrame::ID_PANEL264 = wxNewId();
const long MazePathFrame::ID_PANEL265 = wxNewId();
const long MazePathFrame::ID_PANEL266 = wxNewId();
const long MazePathFrame::ID_PANEL267 = wxNewId();
const long MazePathFrame::ID_PANEL268 = wxNewId();
const long MazePathFrame::ID_PANEL269 = wxNewId();
const long MazePathFrame::ID_PANEL270 = wxNewId();
const long MazePathFrame::ID_PANEL271 = wxNewId();
const long MazePathFrame::ID_PANEL272 = wxNewId();
const long MazePathFrame::ID_PANEL273 = wxNewId();
const long MazePathFrame::ID_PANEL274 = wxNewId();
const long MazePathFrame::ID_PANEL275 = wxNewId();
const long MazePathFrame::ID_PANEL276 = wxNewId();
const long MazePathFrame::ID_PANEL277 = wxNewId();
const long MazePathFrame::ID_PANEL278 = wxNewId();
const long MazePathFrame::ID_PANEL279 = wxNewId();
const long MazePathFrame::ID_PANEL280 = wxNewId();
const long MazePathFrame::ID_PANEL281 = wxNewId();
const long MazePathFrame::ID_PANEL282 = wxNewId();
const long MazePathFrame::ID_PANEL283 = wxNewId();
const long MazePathFrame::ID_PANEL284 = wxNewId();
const long MazePathFrame::ID_PANEL285 = wxNewId();
const long MazePathFrame::ID_PANEL286 = wxNewId();
const long MazePathFrame::ID_PANEL287 = wxNewId();
const long MazePathFrame::ID_PANEL288 = wxNewId();
const long MazePathFrame::ID_PANEL289 = wxNewId();
const long MazePathFrame::ID_PANEL290 = wxNewId();
const long MazePathFrame::ID_PANEL291 = wxNewId();
const long MazePathFrame::ID_PANEL292 = wxNewId();
const long MazePathFrame::ID_PANEL293 = wxNewId();
const long MazePathFrame::ID_PANEL294 = wxNewId();
const long MazePathFrame::ID_PANEL295 = wxNewId();
const long MazePathFrame::ID_PANEL296 = wxNewId();
const long MazePathFrame::ID_PANEL297 = wxNewId();
const long MazePathFrame::ID_PANEL298 = wxNewId();
const long MazePathFrame::ID_PANEL299 = wxNewId();
const long MazePathFrame::ID_PANEL300 = wxNewId();
const long MazePathFrame::ID_PANEL301 = wxNewId();
const long MazePathFrame::ID_PANEL302 = wxNewId();
const long MazePathFrame::ID_PANEL303 = wxNewId();
const long MazePathFrame::ID_PANEL304 = wxNewId();
const long MazePathFrame::ID_PANEL305 = wxNewId();
const long MazePathFrame::ID_PANEL306 = wxNewId();
const long MazePathFrame::ID_PANEL307 = wxNewId();
const long MazePathFrame::ID_PANEL308 = wxNewId();
const long MazePathFrame::ID_PANEL309 = wxNewId();
const long MazePathFrame::ID_PANEL310 = wxNewId();
const long MazePathFrame::ID_PANEL311 = wxNewId();
const long MazePathFrame::ID_PANEL312 = wxNewId();
const long MazePathFrame::ID_PANEL313 = wxNewId();
const long MazePathFrame::ID_PANEL314 = wxNewId();
const long MazePathFrame::ID_PANEL315 = wxNewId();
const long MazePathFrame::ID_PANEL316 = wxNewId();
const long MazePathFrame::ID_PANEL317 = wxNewId();
const long MazePathFrame::ID_PANEL318 = wxNewId();
const long MazePathFrame::ID_PANEL319 = wxNewId();
const long MazePathFrame::ID_PANEL320 = wxNewId();
const long MazePathFrame::ID_PANEL321 = wxNewId();
const long MazePathFrame::ID_PANEL322 = wxNewId();
const long MazePathFrame::ID_PANEL323 = wxNewId();
const long MazePathFrame::ID_PANEL324 = wxNewId();
const long MazePathFrame::ID_PANEL325 = wxNewId();
const long MazePathFrame::ID_PANEL326 = wxNewId();
const long MazePathFrame::ID_PANEL327 = wxNewId();
const long MazePathFrame::ID_PANEL328 = wxNewId();
const long MazePathFrame::ID_PANEL329 = wxNewId();
const long MazePathFrame::ID_PANEL330 = wxNewId();
const long MazePathFrame::ID_PANEL331 = wxNewId();
const long MazePathFrame::ID_PANEL332 = wxNewId();
const long MazePathFrame::ID_PANEL333 = wxNewId();
const long MazePathFrame::ID_PANEL334 = wxNewId();
const long MazePathFrame::ID_PANEL335 = wxNewId();
const long MazePathFrame::ID_PANEL336 = wxNewId();
const long MazePathFrame::ID_PANEL337 = wxNewId();
const long MazePathFrame::ID_PANEL338 = wxNewId();
const long MazePathFrame::ID_PANEL339 = wxNewId();
const long MazePathFrame::ID_PANEL340 = wxNewId();
const long MazePathFrame::ID_PANEL341 = wxNewId();
const long MazePathFrame::ID_PANEL342 = wxNewId();
const long MazePathFrame::ID_PANEL343 = wxNewId();
const long MazePathFrame::ID_PANEL344 = wxNewId();
const long MazePathFrame::ID_PANEL345 = wxNewId();
const long MazePathFrame::ID_PANEL346 = wxNewId();
const long MazePathFrame::ID_PANEL347 = wxNewId();
const long MazePathFrame::ID_PANEL348 = wxNewId();
const long MazePathFrame::ID_PANEL349 = wxNewId();
const long MazePathFrame::ID_PANEL350 = wxNewId();
const long MazePathFrame::ID_PANEL351 = wxNewId();
const long MazePathFrame::ID_PANEL352 = wxNewId();
const long MazePathFrame::ID_PANEL353 = wxNewId();
const long MazePathFrame::ID_PANEL354 = wxNewId();
const long MazePathFrame::ID_PANEL355 = wxNewId();
const long MazePathFrame::ID_PANEL356 = wxNewId();
const long MazePathFrame::ID_PANEL357 = wxNewId();
const long MazePathFrame::ID_PANEL358 = wxNewId();
const long MazePathFrame::ID_PANEL359 = wxNewId();
const long MazePathFrame::ID_PANEL360 = wxNewId();
const long MazePathFrame::ID_PANEL361 = wxNewId();
const long MazePathFrame::ID_PANEL362 = wxNewId();
const long MazePathFrame::ID_PANEL363 = wxNewId();
const long MazePathFrame::ID_PANEL364 = wxNewId();
const long MazePathFrame::ID_PANEL365 = wxNewId();
const long MazePathFrame::ID_PANEL366 = wxNewId();
const long MazePathFrame::ID_PANEL367 = wxNewId();
const long MazePathFrame::ID_PANEL368 = wxNewId();
const long MazePathFrame::ID_PANEL369 = wxNewId();
const long MazePathFrame::ID_PANEL370 = wxNewId();
const long MazePathFrame::ID_PANEL371 = wxNewId();
const long MazePathFrame::ID_PANEL372 = wxNewId();
const long MazePathFrame::ID_PANEL373 = wxNewId();
const long MazePathFrame::ID_PANEL374 = wxNewId();
const long MazePathFrame::ID_PANEL375 = wxNewId();
const long MazePathFrame::ID_PANEL376 = wxNewId();
const long MazePathFrame::ID_PANEL377 = wxNewId();
const long MazePathFrame::ID_PANEL378 = wxNewId();
const long MazePathFrame::ID_PANEL379 = wxNewId();
const long MazePathFrame::ID_PANEL380 = wxNewId();
const long MazePathFrame::ID_PANEL381 = wxNewId();
const long MazePathFrame::ID_PANEL382 = wxNewId();
const long MazePathFrame::ID_PANEL383 = wxNewId();
const long MazePathFrame::ID_PANEL384 = wxNewId();
const long MazePathFrame::ID_PANEL385 = wxNewId();
const long MazePathFrame::ID_PANEL386 = wxNewId();
const long MazePathFrame::ID_PANEL387 = wxNewId();
const long MazePathFrame::ID_PANEL388 = wxNewId();
const long MazePathFrame::ID_PANEL389 = wxNewId();
const long MazePathFrame::ID_PANEL390 = wxNewId();
const long MazePathFrame::ID_PANEL391 = wxNewId();
const long MazePathFrame::ID_PANEL392 = wxNewId();
const long MazePathFrame::ID_PANEL393 = wxNewId();
const long MazePathFrame::ID_PANEL394 = wxNewId();
const long MazePathFrame::ID_PANEL395 = wxNewId();
const long MazePathFrame::ID_PANEL396 = wxNewId();
const long MazePathFrame::ID_PANEL397 = wxNewId();
const long MazePathFrame::ID_PANEL398 = wxNewId();
const long MazePathFrame::ID_PANEL399 = wxNewId();
const long MazePathFrame::ID_PANEL400 = wxNewId();
const long MazePathFrame::ID_PANEL401 = wxNewId();
const long MazePathFrame::ID_PANEL402 = wxNewId();
const long MazePathFrame::ID_PANEL403 = wxNewId();
const long MazePathFrame::ID_PANEL404 = wxNewId();
const long MazePathFrame::ID_PANEL405 = wxNewId();
const long MazePathFrame::ID_PANEL406 = wxNewId();
const long MazePathFrame::ID_PANEL407 = wxNewId();
const long MazePathFrame::ID_PANEL408 = wxNewId();
const long MazePathFrame::ID_PANEL409 = wxNewId();
const long MazePathFrame::ID_PANEL410 = wxNewId();
const long MazePathFrame::ID_PANEL411 = wxNewId();
const long MazePathFrame::ID_PANEL412 = wxNewId();
const long MazePathFrame::ID_PANEL413 = wxNewId();
const long MazePathFrame::ID_PANEL414 = wxNewId();
const long MazePathFrame::ID_PANEL415 = wxNewId();
const long MazePathFrame::ID_PANEL416 = wxNewId();
const long MazePathFrame::ID_PANEL417 = wxNewId();
const long MazePathFrame::ID_PANEL418 = wxNewId();
const long MazePathFrame::ID_PANEL419 = wxNewId();
const long MazePathFrame::ID_PANEL420 = wxNewId();
const long MazePathFrame::ID_PANEL421 = wxNewId();
const long MazePathFrame::ID_PANEL422 = wxNewId();
const long MazePathFrame::ID_PANEL423 = wxNewId();
const long MazePathFrame::ID_PANEL424 = wxNewId();
const long MazePathFrame::ID_PANEL425 = wxNewId();
const long MazePathFrame::ID_PANEL426 = wxNewId();
const long MazePathFrame::ID_PANEL427 = wxNewId();
const long MazePathFrame::ID_PANEL428 = wxNewId();
const long MazePathFrame::ID_PANEL429 = wxNewId();
const long MazePathFrame::ID_PANEL430 = wxNewId();
const long MazePathFrame::ID_PANEL431 = wxNewId();
const long MazePathFrame::ID_PANEL432 = wxNewId();
const long MazePathFrame::ID_PANEL433 = wxNewId();
const long MazePathFrame::ID_PANEL434 = wxNewId();
const long MazePathFrame::ID_PANEL435 = wxNewId();
const long MazePathFrame::ID_PANEL436 = wxNewId();
const long MazePathFrame::ID_PANEL437 = wxNewId();
const long MazePathFrame::ID_PANEL438 = wxNewId();
const long MazePathFrame::ID_PANEL439 = wxNewId();
const long MazePathFrame::ID_PANEL440 = wxNewId();
const long MazePathFrame::ID_PANEL441 = wxNewId();
const long MazePathFrame::ID_PANEL442 = wxNewId();
const long MazePathFrame::ID_PANEL443 = wxNewId();
const long MazePathFrame::ID_PANEL1 = wxNewId();
const long MazePathFrame::ID_BUTTON1 = wxNewId();
const long MazePathFrame::ID_BUTTON2 = wxNewId();
const long MazePathFrame::ID_BUTTON3 = wxNewId();
const long MazePathFrame::ID_STATICTEXT1 = wxNewId();
const long MazePathFrame::ID_CHOICE1 = wxNewId();
const long MazePathFrame::ID_CHOICE2 = wxNewId();
const long MazePathFrame::ID_PANEL2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(MazePathFrame,wxFrame)
    //(*EventTable(MazePathFrame)
    //*)
END_EVENT_TABLE()

MazePathFrame::MazePathFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(MazePathFrame)
    wxGridSizer* GridSizer1;
    wxGridSizer* GridSizer2;

    wxString title = "Maze / Path GUI";
    Create(parent, wxID_ANY, title, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    GridSizer1 = new wxGridSizer(1, 2, 0, 0);
    Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    GridSizer2 = new wxGridSizer(21, 21, 0, 0);
    Panel3 = new wxPanel(Panel1, ID_PANEL3, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL3"));
    GridSizer2->Add(Panel3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel4 = new wxPanel(Panel1, ID_PANEL4, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL4"));
    GridSizer2->Add(Panel4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel5 = new wxPanel(Panel1, ID_PANEL5, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL5"));
    GridSizer2->Add(Panel5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel6 = new wxPanel(Panel1, ID_PANEL6, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL6"));
    GridSizer2->Add(Panel6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel7 = new wxPanel(Panel1, ID_PANEL7, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL7"));
    GridSizer2->Add(Panel7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel8 = new wxPanel(Panel1, ID_PANEL8, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL8"));
    GridSizer2->Add(Panel8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel9 = new wxPanel(Panel1, ID_PANEL9, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL9"));
    GridSizer2->Add(Panel9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel10 = new wxPanel(Panel1, ID_PANEL10, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL10"));
    GridSizer2->Add(Panel10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel11 = new wxPanel(Panel1, ID_PANEL11, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL11"));
    GridSizer2->Add(Panel11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel12 = new wxPanel(Panel1, ID_PANEL12, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL12"));
    GridSizer2->Add(Panel12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel13 = new wxPanel(Panel1, ID_PANEL13, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL13"));
    GridSizer2->Add(Panel13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel14 = new wxPanel(Panel1, ID_PANEL14, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL14"));
    GridSizer2->Add(Panel14, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel15 = new wxPanel(Panel1, ID_PANEL15, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL15"));
    GridSizer2->Add(Panel15, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel16 = new wxPanel(Panel1, ID_PANEL16, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL16"));
    GridSizer2->Add(Panel16, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel17 = new wxPanel(Panel1, ID_PANEL17, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL17"));
    GridSizer2->Add(Panel17, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel18 = new wxPanel(Panel1, ID_PANEL18, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL18"));
    GridSizer2->Add(Panel18, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel19 = new wxPanel(Panel1, ID_PANEL19, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL19"));
    GridSizer2->Add(Panel19, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel20 = new wxPanel(Panel1, ID_PANEL20, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL20"));
    GridSizer2->Add(Panel20, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel21 = new wxPanel(Panel1, ID_PANEL21, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL21"));
    GridSizer2->Add(Panel21, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel22 = new wxPanel(Panel1, ID_PANEL22, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL22"));
    GridSizer2->Add(Panel22, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel23 = new wxPanel(Panel1, ID_PANEL23, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL23"));
    GridSizer2->Add(Panel23, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel24 = new wxPanel(Panel1, ID_PANEL24, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL24"));
    GridSizer2->Add(Panel24, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel25 = new wxPanel(Panel1, ID_PANEL25, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL25"));
    GridSizer2->Add(Panel25, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel26 = new wxPanel(Panel1, ID_PANEL26, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL26"));
    GridSizer2->Add(Panel26, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel27 = new wxPanel(Panel1, ID_PANEL27, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL27"));
    GridSizer2->Add(Panel27, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel28 = new wxPanel(Panel1, ID_PANEL28, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL28"));
    GridSizer2->Add(Panel28, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel29 = new wxPanel(Panel1, ID_PANEL29, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL29"));
    GridSizer2->Add(Panel29, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel30 = new wxPanel(Panel1, ID_PANEL30, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL30"));
    GridSizer2->Add(Panel30, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel31 = new wxPanel(Panel1, ID_PANEL31, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL31"));
    GridSizer2->Add(Panel31, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel32 = new wxPanel(Panel1, ID_PANEL32, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL32"));
    GridSizer2->Add(Panel32, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel33 = new wxPanel(Panel1, ID_PANEL33, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL33"));
    GridSizer2->Add(Panel33, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel34 = new wxPanel(Panel1, ID_PANEL34, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL34"));
    GridSizer2->Add(Panel34, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel35 = new wxPanel(Panel1, ID_PANEL35, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL35"));
    GridSizer2->Add(Panel35, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel36 = new wxPanel(Panel1, ID_PANEL36, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL36"));
    GridSizer2->Add(Panel36, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel37 = new wxPanel(Panel1, ID_PANEL37, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL37"));
    GridSizer2->Add(Panel37, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel38 = new wxPanel(Panel1, ID_PANEL38, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL38"));
    GridSizer2->Add(Panel38, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel39 = new wxPanel(Panel1, ID_PANEL39, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL39"));
    GridSizer2->Add(Panel39, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel40 = new wxPanel(Panel1, ID_PANEL40, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL40"));
    GridSizer2->Add(Panel40, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel41 = new wxPanel(Panel1, ID_PANEL41, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL41"));
    GridSizer2->Add(Panel41, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel42 = new wxPanel(Panel1, ID_PANEL42, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL42"));
    GridSizer2->Add(Panel42, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel43 = new wxPanel(Panel1, ID_PANEL43, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL43"));
    GridSizer2->Add(Panel43, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel44 = new wxPanel(Panel1, ID_PANEL44, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL44"));
    GridSizer2->Add(Panel44, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel45 = new wxPanel(Panel1, ID_PANEL45, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL45"));
    GridSizer2->Add(Panel45, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel46 = new wxPanel(Panel1, ID_PANEL46, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL46"));
    GridSizer2->Add(Panel46, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel47 = new wxPanel(Panel1, ID_PANEL47, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL47"));
    GridSizer2->Add(Panel47, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel48 = new wxPanel(Panel1, ID_PANEL48, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL48"));
    GridSizer2->Add(Panel48, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel49 = new wxPanel(Panel1, ID_PANEL49, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL49"));
    GridSizer2->Add(Panel49, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel50 = new wxPanel(Panel1, ID_PANEL50, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL50"));
    GridSizer2->Add(Panel50, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel51 = new wxPanel(Panel1, ID_PANEL51, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL51"));
    GridSizer2->Add(Panel51, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    Panel52 = new wxPanel(Panel1, ID_PANEL52, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL52"));
    GridSizer2->Add(Panel52, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel53 = new wxPanel(Panel1, ID_PANEL53, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL53"));
    GridSizer2->Add(Panel53, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel54 = new wxPanel(Panel1, ID_PANEL54, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL54"));
    GridSizer2->Add(Panel54, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel55 = new wxPanel(Panel1, ID_PANEL55, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL55"));
    GridSizer2->Add(Panel55, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel56 = new wxPanel(Panel1, ID_PANEL56, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL56"));
    GridSizer2->Add(Panel56, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel57 = new wxPanel(Panel1, ID_PANEL57, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL57"));
    GridSizer2->Add(Panel57, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel58 = new wxPanel(Panel1, ID_PANEL58, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL58"));
    GridSizer2->Add(Panel58, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel59 = new wxPanel(Panel1, ID_PANEL59, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL59"));
    GridSizer2->Add(Panel59, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel60 = new wxPanel(Panel1, ID_PANEL60, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL60"));
    GridSizer2->Add(Panel60, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel61 = new wxPanel(Panel1, ID_PANEL61, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL61"));
    GridSizer2->Add(Panel61, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel62 = new wxPanel(Panel1, ID_PANEL62, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL62"));
    GridSizer2->Add(Panel62, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel63 = new wxPanel(Panel1, ID_PANEL63, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL63"));
    GridSizer2->Add(Panel63, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel64 = new wxPanel(Panel1, ID_PANEL64, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL64"));
    GridSizer2->Add(Panel64, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel65 = new wxPanel(Panel1, ID_PANEL65, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL65"));
    GridSizer2->Add(Panel65, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel66 = new wxPanel(Panel1, ID_PANEL66, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL66"));
    GridSizer2->Add(Panel66, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel67 = new wxPanel(Panel1, ID_PANEL67, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL67"));
    GridSizer2->Add(Panel67, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel68 = new wxPanel(Panel1, ID_PANEL68, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL68"));
    GridSizer2->Add(Panel68, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel69 = new wxPanel(Panel1, ID_PANEL69, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL69"));
    GridSizer2->Add(Panel69, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel70 = new wxPanel(Panel1, ID_PANEL70, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL70"));
    GridSizer2->Add(Panel70, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel71 = new wxPanel(Panel1, ID_PANEL71, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL71"));
    GridSizer2->Add(Panel71, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel72 = new wxPanel(Panel1, ID_PANEL72, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL72"));
    GridSizer2->Add(Panel72, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel73 = new wxPanel(Panel1, ID_PANEL73, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL73"));
    GridSizer2->Add(Panel73, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel74 = new wxPanel(Panel1, ID_PANEL74, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL74"));
    GridSizer2->Add(Panel74, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel75 = new wxPanel(Panel1, ID_PANEL75, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL75"));
    GridSizer2->Add(Panel75, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel76 = new wxPanel(Panel1, ID_PANEL76, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL76"));
    GridSizer2->Add(Panel76, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel77 = new wxPanel(Panel1, ID_PANEL77, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL77"));
    GridSizer2->Add(Panel77, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel78 = new wxPanel(Panel1, ID_PANEL78, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL78"));
    GridSizer2->Add(Panel78, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel79 = new wxPanel(Panel1, ID_PANEL79, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL79"));
    GridSizer2->Add(Panel79, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel80 = new wxPanel(Panel1, ID_PANEL80, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL80"));
    GridSizer2->Add(Panel80, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel81 = new wxPanel(Panel1, ID_PANEL81, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL81"));
    GridSizer2->Add(Panel81, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel82 = new wxPanel(Panel1, ID_PANEL82, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL82"));
    GridSizer2->Add(Panel82, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel83 = new wxPanel(Panel1, ID_PANEL83, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL83"));
    GridSizer2->Add(Panel83, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel84 = new wxPanel(Panel1, ID_PANEL84, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL84"));
    GridSizer2->Add(Panel84, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel85 = new wxPanel(Panel1, ID_PANEL85, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL85"));
    GridSizer2->Add(Panel85, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel86 = new wxPanel(Panel1, ID_PANEL86, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL86"));
    GridSizer2->Add(Panel86, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel87 = new wxPanel(Panel1, ID_PANEL87, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL87"));
    GridSizer2->Add(Panel87, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel88 = new wxPanel(Panel1, ID_PANEL88, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL88"));
    GridSizer2->Add(Panel88, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel89 = new wxPanel(Panel1, ID_PANEL89, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL89"));
    GridSizer2->Add(Panel89, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel90 = new wxPanel(Panel1, ID_PANEL90, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL90"));
    GridSizer2->Add(Panel90, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel91 = new wxPanel(Panel1, ID_PANEL91, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL91"));
    GridSizer2->Add(Panel91, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel92 = new wxPanel(Panel1, ID_PANEL92, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL92"));
    GridSizer2->Add(Panel92, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel93 = new wxPanel(Panel1, ID_PANEL93, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL93"));
    GridSizer2->Add(Panel93, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel94 = new wxPanel(Panel1, ID_PANEL94, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL94"));
    GridSizer2->Add(Panel94, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel95 = new wxPanel(Panel1, ID_PANEL95, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL95"));
    GridSizer2->Add(Panel95, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel96 = new wxPanel(Panel1, ID_PANEL96, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL96"));
    GridSizer2->Add(Panel96, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel97 = new wxPanel(Panel1, ID_PANEL97, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL97"));
    GridSizer2->Add(Panel97, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel98 = new wxPanel(Panel1, ID_PANEL98, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL98"));
    GridSizer2->Add(Panel98, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel99 = new wxPanel(Panel1, ID_PANEL99, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL99"));
    GridSizer2->Add(Panel99, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel100 = new wxPanel(Panel1, ID_PANEL100, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL100"));
    GridSizer2->Add(Panel100, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel101 = new wxPanel(Panel1, ID_PANEL101, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL101"));
    GridSizer2->Add(Panel101, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel102 = new wxPanel(Panel1, ID_PANEL102, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL102"));
    GridSizer2->Add(Panel102, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel103 = new wxPanel(Panel1, ID_PANEL103, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL103"));
    GridSizer2->Add(Panel103, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel104 = new wxPanel(Panel1, ID_PANEL104, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL104"));
    GridSizer2->Add(Panel104, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel105 = new wxPanel(Panel1, ID_PANEL105, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL105"));
    GridSizer2->Add(Panel105, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel106 = new wxPanel(Panel1, ID_PANEL106, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL106"));
    GridSizer2->Add(Panel106, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel107 = new wxPanel(Panel1, ID_PANEL107, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL107"));
    GridSizer2->Add(Panel107, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel108 = new wxPanel(Panel1, ID_PANEL108, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL108"));
    GridSizer2->Add(Panel108, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel109 = new wxPanel(Panel1, ID_PANEL109, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL109"));
    GridSizer2->Add(Panel109, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel110 = new wxPanel(Panel1, ID_PANEL110, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL110"));
    GridSizer2->Add(Panel110, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel111 = new wxPanel(Panel1, ID_PANEL111, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL111"));
    GridSizer2->Add(Panel111, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel112 = new wxPanel(Panel1, ID_PANEL112, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL112"));
    GridSizer2->Add(Panel112, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel113 = new wxPanel(Panel1, ID_PANEL113, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL113"));
    GridSizer2->Add(Panel113, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel114 = new wxPanel(Panel1, ID_PANEL114, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL114"));
    GridSizer2->Add(Panel114, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel115 = new wxPanel(Panel1, ID_PANEL115, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL115"));
    GridSizer2->Add(Panel115, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel116 = new wxPanel(Panel1, ID_PANEL116, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL116"));
    GridSizer2->Add(Panel116, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel117 = new wxPanel(Panel1, ID_PANEL117, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL117"));
    GridSizer2->Add(Panel117, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel118 = new wxPanel(Panel1, ID_PANEL118, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL118"));
    GridSizer2->Add(Panel118, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel119 = new wxPanel(Panel1, ID_PANEL119, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL119"));
    GridSizer2->Add(Panel119, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel120 = new wxPanel(Panel1, ID_PANEL120, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL120"));
    GridSizer2->Add(Panel120, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel121 = new wxPanel(Panel1, ID_PANEL121, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL121"));
    GridSizer2->Add(Panel121, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel122 = new wxPanel(Panel1, ID_PANEL122, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL122"));
    GridSizer2->Add(Panel122, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel123 = new wxPanel(Panel1, ID_PANEL123, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL123"));
    GridSizer2->Add(Panel123, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel124 = new wxPanel(Panel1, ID_PANEL124, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL124"));
    GridSizer2->Add(Panel124, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel125 = new wxPanel(Panel1, ID_PANEL125, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL125"));
    GridSizer2->Add(Panel125, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel126 = new wxPanel(Panel1, ID_PANEL126, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL126"));
    GridSizer2->Add(Panel126, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel127 = new wxPanel(Panel1, ID_PANEL127, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL127"));
    GridSizer2->Add(Panel127, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel128 = new wxPanel(Panel1, ID_PANEL128, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL128"));
    GridSizer2->Add(Panel128, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel129 = new wxPanel(Panel1, ID_PANEL129, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL129"));
    GridSizer2->Add(Panel129, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel130 = new wxPanel(Panel1, ID_PANEL130, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL130"));
    GridSizer2->Add(Panel130, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel131 = new wxPanel(Panel1, ID_PANEL131, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL131"));
    GridSizer2->Add(Panel131, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel132 = new wxPanel(Panel1, ID_PANEL132, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL132"));
    GridSizer2->Add(Panel132, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel133 = new wxPanel(Panel1, ID_PANEL133, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL133"));
    GridSizer2->Add(Panel133, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel134 = new wxPanel(Panel1, ID_PANEL134, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL134"));
    GridSizer2->Add(Panel134, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel135 = new wxPanel(Panel1, ID_PANEL135, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL135"));
    GridSizer2->Add(Panel135, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel136 = new wxPanel(Panel1, ID_PANEL136, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL136"));
    GridSizer2->Add(Panel136, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel137 = new wxPanel(Panel1, ID_PANEL137, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL137"));
    GridSizer2->Add(Panel137, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel138 = new wxPanel(Panel1, ID_PANEL138, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL138"));
    GridSizer2->Add(Panel138, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel139 = new wxPanel(Panel1, ID_PANEL139, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL139"));
    GridSizer2->Add(Panel139, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel140 = new wxPanel(Panel1, ID_PANEL140, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL140"));
    GridSizer2->Add(Panel140, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel141 = new wxPanel(Panel1, ID_PANEL141, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL141"));
    GridSizer2->Add(Panel141, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel142 = new wxPanel(Panel1, ID_PANEL142, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL142"));
    GridSizer2->Add(Panel142, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel143 = new wxPanel(Panel1, ID_PANEL143, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL143"));
    GridSizer2->Add(Panel143, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel144 = new wxPanel(Panel1, ID_PANEL144, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL144"));
    GridSizer2->Add(Panel144, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel145 = new wxPanel(Panel1, ID_PANEL145, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL145"));
    GridSizer2->Add(Panel145, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel146 = new wxPanel(Panel1, ID_PANEL146, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL146"));
    GridSizer2->Add(Panel146, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel147 = new wxPanel(Panel1, ID_PANEL147, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL147"));
    GridSizer2->Add(Panel147, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel148 = new wxPanel(Panel1, ID_PANEL148, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL148"));
    GridSizer2->Add(Panel148, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel149 = new wxPanel(Panel1, ID_PANEL149, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL149"));
    GridSizer2->Add(Panel149, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel150 = new wxPanel(Panel1, ID_PANEL150, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL150"));
    GridSizer2->Add(Panel150, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel151 = new wxPanel(Panel1, ID_PANEL151, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL151"));
    GridSizer2->Add(Panel151, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel152 = new wxPanel(Panel1, ID_PANEL152, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL152"));
    GridSizer2->Add(Panel152, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel153 = new wxPanel(Panel1, ID_PANEL153, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL153"));
    GridSizer2->Add(Panel153, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel154 = new wxPanel(Panel1, ID_PANEL154, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL154"));
    GridSizer2->Add(Panel154, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel155 = new wxPanel(Panel1, ID_PANEL155, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL155"));
    GridSizer2->Add(Panel155, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel156 = new wxPanel(Panel1, ID_PANEL156, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL156"));
    GridSizer2->Add(Panel156, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel157 = new wxPanel(Panel1, ID_PANEL157, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL157"));
    GridSizer2->Add(Panel157, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel158 = new wxPanel(Panel1, ID_PANEL158, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL158"));
    GridSizer2->Add(Panel158, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel159 = new wxPanel(Panel1, ID_PANEL159, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL159"));
    GridSizer2->Add(Panel159, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel160 = new wxPanel(Panel1, ID_PANEL160, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL160"));
    GridSizer2->Add(Panel160, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel161 = new wxPanel(Panel1, ID_PANEL161, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL161"));
    GridSizer2->Add(Panel161, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel162 = new wxPanel(Panel1, ID_PANEL162, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL162"));
    GridSizer2->Add(Panel162, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel163 = new wxPanel(Panel1, ID_PANEL163, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL163"));
    GridSizer2->Add(Panel163, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel164 = new wxPanel(Panel1, ID_PANEL164, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL164"));
    GridSizer2->Add(Panel164, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel165 = new wxPanel(Panel1, ID_PANEL165, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL165"));
    GridSizer2->Add(Panel165, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel166 = new wxPanel(Panel1, ID_PANEL166, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL166"));
    GridSizer2->Add(Panel166, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel167 = new wxPanel(Panel1, ID_PANEL167, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL167"));
    GridSizer2->Add(Panel167, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel168 = new wxPanel(Panel1, ID_PANEL168, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL168"));
    GridSizer2->Add(Panel168, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel169 = new wxPanel(Panel1, ID_PANEL169, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL169"));
    GridSizer2->Add(Panel169, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel170 = new wxPanel(Panel1, ID_PANEL170, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL170"));
    GridSizer2->Add(Panel170, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel171 = new wxPanel(Panel1, ID_PANEL171, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL171"));
    GridSizer2->Add(Panel171, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel172 = new wxPanel(Panel1, ID_PANEL172, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL172"));
    GridSizer2->Add(Panel172, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel173 = new wxPanel(Panel1, ID_PANEL173, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL173"));
    GridSizer2->Add(Panel173, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel174 = new wxPanel(Panel1, ID_PANEL174, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL174"));
    GridSizer2->Add(Panel174, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel175 = new wxPanel(Panel1, ID_PANEL175, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL175"));
    GridSizer2->Add(Panel175, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel176 = new wxPanel(Panel1, ID_PANEL176, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL176"));
    GridSizer2->Add(Panel176, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel177 = new wxPanel(Panel1, ID_PANEL177, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL177"));
    GridSizer2->Add(Panel177, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel178 = new wxPanel(Panel1, ID_PANEL178, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL178"));
    GridSizer2->Add(Panel178, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel179 = new wxPanel(Panel1, ID_PANEL179, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL179"));
    GridSizer2->Add(Panel179, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel180 = new wxPanel(Panel1, ID_PANEL180, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL180"));
    GridSizer2->Add(Panel180, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel181 = new wxPanel(Panel1, ID_PANEL181, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL181"));
    GridSizer2->Add(Panel181, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel182 = new wxPanel(Panel1, ID_PANEL182, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL182"));
    GridSizer2->Add(Panel182, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel183 = new wxPanel(Panel1, ID_PANEL183, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL183"));
    GridSizer2->Add(Panel183, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel184 = new wxPanel(Panel1, ID_PANEL184, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL184"));
    GridSizer2->Add(Panel184, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel185 = new wxPanel(Panel1, ID_PANEL185, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL185"));
    GridSizer2->Add(Panel185, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel186 = new wxPanel(Panel1, ID_PANEL186, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL186"));
    GridSizer2->Add(Panel186, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel187 = new wxPanel(Panel1, ID_PANEL187, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL187"));
    GridSizer2->Add(Panel187, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel188 = new wxPanel(Panel1, ID_PANEL188, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL188"));
    GridSizer2->Add(Panel188, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel189 = new wxPanel(Panel1, ID_PANEL189, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL189"));
    GridSizer2->Add(Panel189, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel190 = new wxPanel(Panel1, ID_PANEL190, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL190"));
    GridSizer2->Add(Panel190, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel191 = new wxPanel(Panel1, ID_PANEL191, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL191"));
    GridSizer2->Add(Panel191, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel192 = new wxPanel(Panel1, ID_PANEL192, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL192"));
    GridSizer2->Add(Panel192, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel193 = new wxPanel(Panel1, ID_PANEL193, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL193"));
    GridSizer2->Add(Panel193, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel194 = new wxPanel(Panel1, ID_PANEL194, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL194"));
    GridSizer2->Add(Panel194, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel195 = new wxPanel(Panel1, ID_PANEL195, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL195"));
    GridSizer2->Add(Panel195, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel196 = new wxPanel(Panel1, ID_PANEL196, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL196"));
    GridSizer2->Add(Panel196, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel197 = new wxPanel(Panel1, ID_PANEL197, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL197"));
    GridSizer2->Add(Panel197, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel198 = new wxPanel(Panel1, ID_PANEL198, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL198"));
    GridSizer2->Add(Panel198, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel199 = new wxPanel(Panel1, ID_PANEL199, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL199"));
    GridSizer2->Add(Panel199, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel200 = new wxPanel(Panel1, ID_PANEL200, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL200"));
    GridSizer2->Add(Panel200, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel201 = new wxPanel(Panel1, ID_PANEL201, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL201"));
    GridSizer2->Add(Panel201, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel202 = new wxPanel(Panel1, ID_PANEL202, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL202"));
    GridSizer2->Add(Panel202, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel203 = new wxPanel(Panel1, ID_PANEL203, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL203"));
    GridSizer2->Add(Panel203, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel204 = new wxPanel(Panel1, ID_PANEL204, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL204"));
    GridSizer2->Add(Panel204, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel205 = new wxPanel(Panel1, ID_PANEL205, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL205"));
    GridSizer2->Add(Panel205, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel206 = new wxPanel(Panel1, ID_PANEL206, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL206"));
    GridSizer2->Add(Panel206, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel207 = new wxPanel(Panel1, ID_PANEL207, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL207"));
    GridSizer2->Add(Panel207, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel208 = new wxPanel(Panel1, ID_PANEL208, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL208"));
    GridSizer2->Add(Panel208, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel209 = new wxPanel(Panel1, ID_PANEL209, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL209"));
    GridSizer2->Add(Panel209, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel210 = new wxPanel(Panel1, ID_PANEL210, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL210"));
    GridSizer2->Add(Panel210, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel211 = new wxPanel(Panel1, ID_PANEL211, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL211"));
    GridSizer2->Add(Panel211, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel212 = new wxPanel(Panel1, ID_PANEL212, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL212"));
    GridSizer2->Add(Panel212, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel213 = new wxPanel(Panel1, ID_PANEL213, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL213"));
    GridSizer2->Add(Panel213, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel214 = new wxPanel(Panel1, ID_PANEL214, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL214"));
    GridSizer2->Add(Panel214, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel215 = new wxPanel(Panel1, ID_PANEL215, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL215"));
    GridSizer2->Add(Panel215, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel216 = new wxPanel(Panel1, ID_PANEL216, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL216"));
    GridSizer2->Add(Panel216, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel217 = new wxPanel(Panel1, ID_PANEL217, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL217"));
    GridSizer2->Add(Panel217, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel218 = new wxPanel(Panel1, ID_PANEL218, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL218"));
    GridSizer2->Add(Panel218, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel219 = new wxPanel(Panel1, ID_PANEL219, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL219"));
    GridSizer2->Add(Panel219, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel220 = new wxPanel(Panel1, ID_PANEL220, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL220"));
    GridSizer2->Add(Panel220, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel221 = new wxPanel(Panel1, ID_PANEL221, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL221"));
    GridSizer2->Add(Panel221, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel222 = new wxPanel(Panel1, ID_PANEL222, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL222"));
    GridSizer2->Add(Panel222, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel223 = new wxPanel(Panel1, ID_PANEL223, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL223"));
    GridSizer2->Add(Panel223, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel224 = new wxPanel(Panel1, ID_PANEL224, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL224"));
    GridSizer2->Add(Panel224, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel225 = new wxPanel(Panel1, ID_PANEL225, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL225"));
    GridSizer2->Add(Panel225, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel226 = new wxPanel(Panel1, ID_PANEL226, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL226"));
    GridSizer2->Add(Panel226, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel227 = new wxPanel(Panel1, ID_PANEL227, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL227"));
    GridSizer2->Add(Panel227, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel228 = new wxPanel(Panel1, ID_PANEL228, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL228"));
    GridSizer2->Add(Panel228, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel229 = new wxPanel(Panel1, ID_PANEL229, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL229"));
    GridSizer2->Add(Panel229, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel230 = new wxPanel(Panel1, ID_PANEL230, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL230"));
    GridSizer2->Add(Panel230, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel231 = new wxPanel(Panel1, ID_PANEL231, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL231"));
    GridSizer2->Add(Panel231, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel232 = new wxPanel(Panel1, ID_PANEL232, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL232"));
    GridSizer2->Add(Panel232, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel233 = new wxPanel(Panel1, ID_PANEL233, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL233"));
    GridSizer2->Add(Panel233, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel234 = new wxPanel(Panel1, ID_PANEL234, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL234"));
    GridSizer2->Add(Panel234, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel235 = new wxPanel(Panel1, ID_PANEL235, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL235"));
    GridSizer2->Add(Panel235, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel236 = new wxPanel(Panel1, ID_PANEL236, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL236"));
    GridSizer2->Add(Panel236, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel237 = new wxPanel(Panel1, ID_PANEL237, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL237"));
    GridSizer2->Add(Panel237, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel238 = new wxPanel(Panel1, ID_PANEL238, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL238"));
    GridSizer2->Add(Panel238, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel239 = new wxPanel(Panel1, ID_PANEL239, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL239"));
    GridSizer2->Add(Panel239, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel240 = new wxPanel(Panel1, ID_PANEL240, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL240"));
    GridSizer2->Add(Panel240, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel241 = new wxPanel(Panel1, ID_PANEL241, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL241"));
    GridSizer2->Add(Panel241, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel242 = new wxPanel(Panel1, ID_PANEL242, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL242"));
    GridSizer2->Add(Panel242, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel243 = new wxPanel(Panel1, ID_PANEL243, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL243"));
    GridSizer2->Add(Panel243, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel244 = new wxPanel(Panel1, ID_PANEL244, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL244"));
    GridSizer2->Add(Panel244, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel245 = new wxPanel(Panel1, ID_PANEL245, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL245"));
    GridSizer2->Add(Panel245, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel246 = new wxPanel(Panel1, ID_PANEL246, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL246"));
    GridSizer2->Add(Panel246, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel247 = new wxPanel(Panel1, ID_PANEL247, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL247"));
    GridSizer2->Add(Panel247, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel248 = new wxPanel(Panel1, ID_PANEL248, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL248"));
    GridSizer2->Add(Panel248, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel249 = new wxPanel(Panel1, ID_PANEL249, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL249"));
    GridSizer2->Add(Panel249, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel250 = new wxPanel(Panel1, ID_PANEL250, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL250"));
    GridSizer2->Add(Panel250, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel251 = new wxPanel(Panel1, ID_PANEL251, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL251"));
    GridSizer2->Add(Panel251, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel252 = new wxPanel(Panel1, ID_PANEL252, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL252"));
    GridSizer2->Add(Panel252, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel253 = new wxPanel(Panel1, ID_PANEL253, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL253"));
    GridSizer2->Add(Panel253, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel254 = new wxPanel(Panel1, ID_PANEL254, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL254"));
    GridSizer2->Add(Panel254, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel255 = new wxPanel(Panel1, ID_PANEL255, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL255"));
    GridSizer2->Add(Panel255, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel256 = new wxPanel(Panel1, ID_PANEL256, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL256"));
    GridSizer2->Add(Panel256, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel257 = new wxPanel(Panel1, ID_PANEL257, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL257"));
    GridSizer2->Add(Panel257, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel258 = new wxPanel(Panel1, ID_PANEL258, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL258"));
    GridSizer2->Add(Panel258, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel259 = new wxPanel(Panel1, ID_PANEL259, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL259"));
    GridSizer2->Add(Panel259, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel260 = new wxPanel(Panel1, ID_PANEL260, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL260"));
    GridSizer2->Add(Panel260, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel261 = new wxPanel(Panel1, ID_PANEL261, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL261"));
    GridSizer2->Add(Panel261, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel262 = new wxPanel(Panel1, ID_PANEL262, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL262"));
    GridSizer2->Add(Panel262, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel263 = new wxPanel(Panel1, ID_PANEL263, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL263"));
    GridSizer2->Add(Panel263, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel264 = new wxPanel(Panel1, ID_PANEL264, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL264"));
    GridSizer2->Add(Panel264, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel265 = new wxPanel(Panel1, ID_PANEL265, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL265"));
    GridSizer2->Add(Panel265, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel266 = new wxPanel(Panel1, ID_PANEL266, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL266"));
    GridSizer2->Add(Panel266, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel267 = new wxPanel(Panel1, ID_PANEL267, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL267"));
    GridSizer2->Add(Panel267, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel268 = new wxPanel(Panel1, ID_PANEL268, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL268"));
    GridSizer2->Add(Panel268, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel269 = new wxPanel(Panel1, ID_PANEL269, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL269"));
    GridSizer2->Add(Panel269, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel270 = new wxPanel(Panel1, ID_PANEL270, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL270"));
    GridSizer2->Add(Panel270, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel271 = new wxPanel(Panel1, ID_PANEL271, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL271"));
    GridSizer2->Add(Panel271, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel272 = new wxPanel(Panel1, ID_PANEL272, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL272"));
    GridSizer2->Add(Panel272, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel273 = new wxPanel(Panel1, ID_PANEL273, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL273"));
    GridSizer2->Add(Panel273, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel274 = new wxPanel(Panel1, ID_PANEL274, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL274"));
    GridSizer2->Add(Panel274, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel275 = new wxPanel(Panel1, ID_PANEL275, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL275"));
    GridSizer2->Add(Panel275, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel276 = new wxPanel(Panel1, ID_PANEL276, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL276"));
    GridSizer2->Add(Panel276, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel277 = new wxPanel(Panel1, ID_PANEL277, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL277"));
    GridSizer2->Add(Panel277, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel278 = new wxPanel(Panel1, ID_PANEL278, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL278"));
    GridSizer2->Add(Panel278, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel279 = new wxPanel(Panel1, ID_PANEL279, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL279"));
    GridSizer2->Add(Panel279, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel280 = new wxPanel(Panel1, ID_PANEL280, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL280"));
    GridSizer2->Add(Panel280, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel281 = new wxPanel(Panel1, ID_PANEL281, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL281"));
    GridSizer2->Add(Panel281, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel282 = new wxPanel(Panel1, ID_PANEL282, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL282"));
    GridSizer2->Add(Panel282, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel283 = new wxPanel(Panel1, ID_PANEL283, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL283"));
    GridSizer2->Add(Panel283, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel284 = new wxPanel(Panel1, ID_PANEL284, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL284"));
    GridSizer2->Add(Panel284, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel285 = new wxPanel(Panel1, ID_PANEL285, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL285"));
    GridSizer2->Add(Panel285, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel286 = new wxPanel(Panel1, ID_PANEL286, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL286"));
    GridSizer2->Add(Panel286, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel287 = new wxPanel(Panel1, ID_PANEL287, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL287"));
    GridSizer2->Add(Panel287, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel288 = new wxPanel(Panel1, ID_PANEL288, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL288"));
    GridSizer2->Add(Panel288, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel289 = new wxPanel(Panel1, ID_PANEL289, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL289"));
    GridSizer2->Add(Panel289, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel290 = new wxPanel(Panel1, ID_PANEL290, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL290"));
    GridSizer2->Add(Panel290, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel291 = new wxPanel(Panel1, ID_PANEL291, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL291"));
    GridSizer2->Add(Panel291, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel292 = new wxPanel(Panel1, ID_PANEL292, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL292"));
    GridSizer2->Add(Panel292, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel293 = new wxPanel(Panel1, ID_PANEL293, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL293"));
    GridSizer2->Add(Panel293, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel294 = new wxPanel(Panel1, ID_PANEL294, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL294"));
    GridSizer2->Add(Panel294, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel295 = new wxPanel(Panel1, ID_PANEL295, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL295"));
    GridSizer2->Add(Panel295, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel296 = new wxPanel(Panel1, ID_PANEL296, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL296"));
    GridSizer2->Add(Panel296, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel297 = new wxPanel(Panel1, ID_PANEL297, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL297"));
    GridSizer2->Add(Panel297, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel298 = new wxPanel(Panel1, ID_PANEL298, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL298"));
    GridSizer2->Add(Panel298, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel299 = new wxPanel(Panel1, ID_PANEL299, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL299"));
    GridSizer2->Add(Panel299, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel300 = new wxPanel(Panel1, ID_PANEL300, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL300"));
    GridSizer2->Add(Panel300, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel301 = new wxPanel(Panel1, ID_PANEL301, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL301"));
    GridSizer2->Add(Panel301, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel302 = new wxPanel(Panel1, ID_PANEL302, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL302"));
    GridSizer2->Add(Panel302, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel303 = new wxPanel(Panel1, ID_PANEL303, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL303"));
    GridSizer2->Add(Panel303, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel304 = new wxPanel(Panel1, ID_PANEL304, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL304"));
    GridSizer2->Add(Panel304, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel305 = new wxPanel(Panel1, ID_PANEL305, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL305"));
    GridSizer2->Add(Panel305, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel306 = new wxPanel(Panel1, ID_PANEL306, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL306"));
    GridSizer2->Add(Panel306, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel307 = new wxPanel(Panel1, ID_PANEL307, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL307"));
    GridSizer2->Add(Panel307, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel308 = new wxPanel(Panel1, ID_PANEL308, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL308"));
    GridSizer2->Add(Panel308, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel309 = new wxPanel(Panel1, ID_PANEL309, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL309"));
    GridSizer2->Add(Panel309, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel310 = new wxPanel(Panel1, ID_PANEL310, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL310"));
    GridSizer2->Add(Panel310, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel311 = new wxPanel(Panel1, ID_PANEL311, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL311"));
    GridSizer2->Add(Panel311, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel312 = new wxPanel(Panel1, ID_PANEL312, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL312"));
    GridSizer2->Add(Panel312, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel313 = new wxPanel(Panel1, ID_PANEL313, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL313"));
    GridSizer2->Add(Panel313, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel314 = new wxPanel(Panel1, ID_PANEL314, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL314"));
    GridSizer2->Add(Panel314, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel315 = new wxPanel(Panel1, ID_PANEL315, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL315"));
    GridSizer2->Add(Panel315, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel316 = new wxPanel(Panel1, ID_PANEL316, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL316"));
    GridSizer2->Add(Panel316, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel317 = new wxPanel(Panel1, ID_PANEL317, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL317"));
    GridSizer2->Add(Panel317, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel318 = new wxPanel(Panel1, ID_PANEL318, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL318"));
    GridSizer2->Add(Panel318, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel319 = new wxPanel(Panel1, ID_PANEL319, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL319"));
    GridSizer2->Add(Panel319, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel320 = new wxPanel(Panel1, ID_PANEL320, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL320"));
    GridSizer2->Add(Panel320, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel321 = new wxPanel(Panel1, ID_PANEL321, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL321"));
    GridSizer2->Add(Panel321, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel322 = new wxPanel(Panel1, ID_PANEL322, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL322"));
    GridSizer2->Add(Panel322, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel323 = new wxPanel(Panel1, ID_PANEL323, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL323"));
    GridSizer2->Add(Panel323, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel324 = new wxPanel(Panel1, ID_PANEL324, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL324"));
    GridSizer2->Add(Panel324, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel325 = new wxPanel(Panel1, ID_PANEL325, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL325"));
    GridSizer2->Add(Panel325, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel326 = new wxPanel(Panel1, ID_PANEL326, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL326"));
    GridSizer2->Add(Panel326, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel327 = new wxPanel(Panel1, ID_PANEL327, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL327"));
    GridSizer2->Add(Panel327, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel328 = new wxPanel(Panel1, ID_PANEL328, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL328"));
    GridSizer2->Add(Panel328, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel329 = new wxPanel(Panel1, ID_PANEL329, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL329"));
    GridSizer2->Add(Panel329, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel330 = new wxPanel(Panel1, ID_PANEL330, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL330"));
    GridSizer2->Add(Panel330, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel331 = new wxPanel(Panel1, ID_PANEL331, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL331"));
    GridSizer2->Add(Panel331, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel332 = new wxPanel(Panel1, ID_PANEL332, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL332"));
    GridSizer2->Add(Panel332, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel333 = new wxPanel(Panel1, ID_PANEL333, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL333"));
    GridSizer2->Add(Panel333, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel334 = new wxPanel(Panel1, ID_PANEL334, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL334"));
    GridSizer2->Add(Panel334, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel335 = new wxPanel(Panel1, ID_PANEL335, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL335"));
    GridSizer2->Add(Panel335, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel336 = new wxPanel(Panel1, ID_PANEL336, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL336"));
    GridSizer2->Add(Panel336, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel337 = new wxPanel(Panel1, ID_PANEL337, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL337"));
    GridSizer2->Add(Panel337, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel338 = new wxPanel(Panel1, ID_PANEL338, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL338"));
    GridSizer2->Add(Panel338, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel339 = new wxPanel(Panel1, ID_PANEL339, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL339"));
    GridSizer2->Add(Panel339, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel340 = new wxPanel(Panel1, ID_PANEL340, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL340"));
    GridSizer2->Add(Panel340, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel341 = new wxPanel(Panel1, ID_PANEL341, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL341"));
    GridSizer2->Add(Panel341, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel342 = new wxPanel(Panel1, ID_PANEL342, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL342"));
    GridSizer2->Add(Panel342, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel343 = new wxPanel(Panel1, ID_PANEL343, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL343"));
    GridSizer2->Add(Panel343, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel344 = new wxPanel(Panel1, ID_PANEL344, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL344"));
    GridSizer2->Add(Panel344, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel345 = new wxPanel(Panel1, ID_PANEL345, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL345"));
    GridSizer2->Add(Panel345, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel346 = new wxPanel(Panel1, ID_PANEL346, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL346"));
    GridSizer2->Add(Panel346, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel347 = new wxPanel(Panel1, ID_PANEL347, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL347"));
    GridSizer2->Add(Panel347, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel348 = new wxPanel(Panel1, ID_PANEL348, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL348"));
    GridSizer2->Add(Panel348, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel349 = new wxPanel(Panel1, ID_PANEL349, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL349"));
    GridSizer2->Add(Panel349, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel350 = new wxPanel(Panel1, ID_PANEL350, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL350"));
    GridSizer2->Add(Panel350, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel351 = new wxPanel(Panel1, ID_PANEL351, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL351"));
    GridSizer2->Add(Panel351, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel352 = new wxPanel(Panel1, ID_PANEL352, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL352"));
    GridSizer2->Add(Panel352, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel353 = new wxPanel(Panel1, ID_PANEL353, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL353"));
    GridSizer2->Add(Panel353, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel354 = new wxPanel(Panel1, ID_PANEL354, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL354"));
    GridSizer2->Add(Panel354, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel355 = new wxPanel(Panel1, ID_PANEL355, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL355"));
    GridSizer2->Add(Panel355, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel356 = new wxPanel(Panel1, ID_PANEL356, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL356"));
    GridSizer2->Add(Panel356, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel357 = new wxPanel(Panel1, ID_PANEL357, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL357"));
    GridSizer2->Add(Panel357, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel358 = new wxPanel(Panel1, ID_PANEL358, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL358"));
    GridSizer2->Add(Panel358, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel359 = new wxPanel(Panel1, ID_PANEL359, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL359"));
    GridSizer2->Add(Panel359, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel360 = new wxPanel(Panel1, ID_PANEL360, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL360"));
    GridSizer2->Add(Panel360, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel361 = new wxPanel(Panel1, ID_PANEL361, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL361"));
    GridSizer2->Add(Panel361, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel362 = new wxPanel(Panel1, ID_PANEL362, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL362"));
    GridSizer2->Add(Panel362, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel363 = new wxPanel(Panel1, ID_PANEL363, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL363"));
    GridSizer2->Add(Panel363, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel364 = new wxPanel(Panel1, ID_PANEL364, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL364"));
    GridSizer2->Add(Panel364, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel365 = new wxPanel(Panel1, ID_PANEL365, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL365"));
    GridSizer2->Add(Panel365, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel366 = new wxPanel(Panel1, ID_PANEL366, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL366"));
    GridSizer2->Add(Panel366, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel367 = new wxPanel(Panel1, ID_PANEL367, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL367"));
    GridSizer2->Add(Panel367, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel368 = new wxPanel(Panel1, ID_PANEL368, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL368"));
    GridSizer2->Add(Panel368, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel369 = new wxPanel(Panel1, ID_PANEL369, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL369"));
    GridSizer2->Add(Panel369, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel370 = new wxPanel(Panel1, ID_PANEL370, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL370"));
    GridSizer2->Add(Panel370, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel371 = new wxPanel(Panel1, ID_PANEL371, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL371"));
    GridSizer2->Add(Panel371, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel372 = new wxPanel(Panel1, ID_PANEL372, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL372"));
    GridSizer2->Add(Panel372, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel373 = new wxPanel(Panel1, ID_PANEL373, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL373"));
    GridSizer2->Add(Panel373, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel374 = new wxPanel(Panel1, ID_PANEL374, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL374"));
    GridSizer2->Add(Panel374, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel375 = new wxPanel(Panel1, ID_PANEL375, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL375"));
    GridSizer2->Add(Panel375, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel376 = new wxPanel(Panel1, ID_PANEL376, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL376"));
    GridSizer2->Add(Panel376, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel377 = new wxPanel(Panel1, ID_PANEL377, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL377"));
    GridSizer2->Add(Panel377, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel378 = new wxPanel(Panel1, ID_PANEL378, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL378"));
    GridSizer2->Add(Panel378, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel379 = new wxPanel(Panel1, ID_PANEL379, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL379"));
    GridSizer2->Add(Panel379, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel380 = new wxPanel(Panel1, ID_PANEL380, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL380"));
    GridSizer2->Add(Panel380, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel381 = new wxPanel(Panel1, ID_PANEL381, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL381"));
    GridSizer2->Add(Panel381, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel382 = new wxPanel(Panel1, ID_PANEL382, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL382"));
    GridSizer2->Add(Panel382, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel383 = new wxPanel(Panel1, ID_PANEL383, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL383"));
    GridSizer2->Add(Panel383, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel384 = new wxPanel(Panel1, ID_PANEL384, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL384"));
    GridSizer2->Add(Panel384, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel385 = new wxPanel(Panel1, ID_PANEL385, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL385"));
    GridSizer2->Add(Panel385, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel386 = new wxPanel(Panel1, ID_PANEL386, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL386"));
    GridSizer2->Add(Panel386, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel387 = new wxPanel(Panel1, ID_PANEL387, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL387"));
    GridSizer2->Add(Panel387, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel388 = new wxPanel(Panel1, ID_PANEL388, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL388"));
    GridSizer2->Add(Panel388, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel389 = new wxPanel(Panel1, ID_PANEL389, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL389"));
    GridSizer2->Add(Panel389, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel390 = new wxPanel(Panel1, ID_PANEL390, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL390"));
    GridSizer2->Add(Panel390, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel391 = new wxPanel(Panel1, ID_PANEL391, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL391"));
    GridSizer2->Add(Panel391, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel392 = new wxPanel(Panel1, ID_PANEL392, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL392"));
    GridSizer2->Add(Panel392, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel393 = new wxPanel(Panel1, ID_PANEL393, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL393"));
    GridSizer2->Add(Panel393, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel394 = new wxPanel(Panel1, ID_PANEL394, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL394"));
    GridSizer2->Add(Panel394, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel395 = new wxPanel(Panel1, ID_PANEL395, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL395"));
    GridSizer2->Add(Panel395, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel396 = new wxPanel(Panel1, ID_PANEL396, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL396"));
    GridSizer2->Add(Panel396, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel397 = new wxPanel(Panel1, ID_PANEL397, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL397"));
    GridSizer2->Add(Panel397, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel398 = new wxPanel(Panel1, ID_PANEL398, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL398"));
    GridSizer2->Add(Panel398, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel399 = new wxPanel(Panel1, ID_PANEL399, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL399"));
    GridSizer2->Add(Panel399, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel400 = new wxPanel(Panel1, ID_PANEL400, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL400"));
    GridSizer2->Add(Panel400, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel401 = new wxPanel(Panel1, ID_PANEL401, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL401"));
    GridSizer2->Add(Panel401, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel402 = new wxPanel(Panel1, ID_PANEL402, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL402"));
    GridSizer2->Add(Panel402, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel403 = new wxPanel(Panel1, ID_PANEL403, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL403"));
    GridSizer2->Add(Panel403, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel404 = new wxPanel(Panel1, ID_PANEL404, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL404"));
    GridSizer2->Add(Panel404, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel405 = new wxPanel(Panel1, ID_PANEL405, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL405"));
    GridSizer2->Add(Panel405, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel406 = new wxPanel(Panel1, ID_PANEL406, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL406"));
    GridSizer2->Add(Panel406, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel407 = new wxPanel(Panel1, ID_PANEL407, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL407"));
    GridSizer2->Add(Panel407, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel408 = new wxPanel(Panel1, ID_PANEL408, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL408"));
    GridSizer2->Add(Panel408, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel409 = new wxPanel(Panel1, ID_PANEL409, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL409"));
    GridSizer2->Add(Panel409, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel410 = new wxPanel(Panel1, ID_PANEL410, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL410"));
    GridSizer2->Add(Panel410, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel411 = new wxPanel(Panel1, ID_PANEL411, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL411"));
    GridSizer2->Add(Panel411, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel412 = new wxPanel(Panel1, ID_PANEL412, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL412"));
    GridSizer2->Add(Panel412, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel413 = new wxPanel(Panel1, ID_PANEL413, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL413"));
    GridSizer2->Add(Panel413, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel414 = new wxPanel(Panel1, ID_PANEL414, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL414"));
    GridSizer2->Add(Panel414, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel415 = new wxPanel(Panel1, ID_PANEL415, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL415"));
    GridSizer2->Add(Panel415, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel416 = new wxPanel(Panel1, ID_PANEL416, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL416"));
    GridSizer2->Add(Panel416, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel417 = new wxPanel(Panel1, ID_PANEL417, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL417"));
    GridSizer2->Add(Panel417, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel418 = new wxPanel(Panel1, ID_PANEL418, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL418"));
    GridSizer2->Add(Panel418, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel419 = new wxPanel(Panel1, ID_PANEL419, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL419"));
    GridSizer2->Add(Panel419, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel420 = new wxPanel(Panel1, ID_PANEL420, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL420"));
    GridSizer2->Add(Panel420, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel421 = new wxPanel(Panel1, ID_PANEL421, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL421"));
    GridSizer2->Add(Panel421, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel422 = new wxPanel(Panel1, ID_PANEL422, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL422"));
    GridSizer2->Add(Panel422, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel423 = new wxPanel(Panel1, ID_PANEL423, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL423"));
    GridSizer2->Add(Panel423, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel424 = new wxPanel(Panel1, ID_PANEL424, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL424"));
    GridSizer2->Add(Panel424, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel425 = new wxPanel(Panel1, ID_PANEL425, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL425"));
    GridSizer2->Add(Panel425, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel426 = new wxPanel(Panel1, ID_PANEL426, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL426"));
    GridSizer2->Add(Panel426, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel427 = new wxPanel(Panel1, ID_PANEL427, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL427"));
    GridSizer2->Add(Panel427, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel428 = new wxPanel(Panel1, ID_PANEL428, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL428"));
    GridSizer2->Add(Panel428, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel429 = new wxPanel(Panel1, ID_PANEL429, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL429"));
    GridSizer2->Add(Panel429, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel430 = new wxPanel(Panel1, ID_PANEL430, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL430"));
    GridSizer2->Add(Panel430, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel431 = new wxPanel(Panel1, ID_PANEL431, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL431"));
    GridSizer2->Add(Panel431, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel432 = new wxPanel(Panel1, ID_PANEL432, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL432"));
    GridSizer2->Add(Panel432, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel433 = new wxPanel(Panel1, ID_PANEL433, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL433"));
    GridSizer2->Add(Panel433, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel434 = new wxPanel(Panel1, ID_PANEL434, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL434"));
    GridSizer2->Add(Panel434, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel435 = new wxPanel(Panel1, ID_PANEL435, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL435"));
    GridSizer2->Add(Panel435, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel436 = new wxPanel(Panel1, ID_PANEL436, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL436"));
    GridSizer2->Add(Panel436, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel437 = new wxPanel(Panel1, ID_PANEL437, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL437"));
    GridSizer2->Add(Panel437, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel438 = new wxPanel(Panel1, ID_PANEL438, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL438"));
    GridSizer2->Add(Panel438, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel439 = new wxPanel(Panel1, ID_PANEL439, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL439"));
    GridSizer2->Add(Panel439, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel440 = new wxPanel(Panel1, ID_PANEL440, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL440"));
    GridSizer2->Add(Panel440, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel441 = new wxPanel(Panel1, ID_PANEL441, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL441"));
    GridSizer2->Add(Panel441, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel442 = new wxPanel(Panel1, ID_PANEL442, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL442"));
    GridSizer2->Add(Panel442, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel443 = new wxPanel(Panel1, ID_PANEL443, wxDefaultPosition, wxSize(20,20), wxTAB_TRAVERSAL, _T("ID_PANEL443"));
    GridSizer2->Add(Panel443, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel1->SetSizer(GridSizer2);
    GridSizer2->Fit(Panel1);
    GridSizer2->SetSizeHints(Panel1);
    GridSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel2 = new wxPanel(this, ID_PANEL2, wxDefaultPosition, wxSize(513,477), wxTAB_TRAVERSAL, _T("ID_PANEL2"));
    Button1 = new wxButton(Panel2, ID_BUTTON1, _("Create Maze"), wxPoint(304,264), wxSize(200,32), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Button2 = new wxButton(Panel2, ID_BUTTON2, _("Find Path"), wxPoint(304,128), wxSize(200,32), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    Button3 = new wxButton(Panel2, ID_BUTTON3, _("Clear"), wxPoint(160,408), wxSize(200,50), 0, wxDefaultValidator, _T("ID_BUTTON3"));
    StaticText1 = new wxStaticText(Panel2, ID_STATICTEXT1, _("Ctrl = Wall || Shift = Erase || Ctrl+S = Start || Ctrl+E = End"), wxPoint(8,8), wxSize(496,32), wxALIGN_CENTRE|wxBORDER_STATIC, _T("ID_STATICTEXT1"));
    Path = new wxChoice(Panel2, ID_CHOICE1, wxPoint(8,128), wxSize(288,32), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
    Path->Append(_("DFS"));
    Path->Append(_("BFS"));
    Path->Append(_("A* (A Star) Search Algorithm"));
    Maze = new wxChoice(Panel2, ID_CHOICE2, wxPoint(8,264), wxSize(288,32), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE2"));
    Maze->Append(_("Randomized Prim\'s Algorithm"));
    Maze->Append(_("Randomized Kruskal\'s Algorithm"));
    Maze->Append(_("Recursive Backtracking"));
    GridSizer1->Add(Panel2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(GridSizer1);
    GridSizer1->Fit(this);
    GridSizer1->SetSizeHints(this);
    Center();

    Panel3->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel4->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel5->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel6->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel7->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel8->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel9->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel10->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel11->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel12->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel13->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel14->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel15->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel16->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel17->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel18->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel19->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel20->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel21->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel22->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel23->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel24->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel25->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel26->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel27->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel28->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel29->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel30->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel31->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel32->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel33->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel34->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel35->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel36->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel37->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel38->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel39->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel40->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel41->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel42->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel43->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel44->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel45->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel46->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel47->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel48->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel49->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel50->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel51->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel52->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel53->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel54->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel55->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel56->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel57->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel58->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel59->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel60->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel61->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel62->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel63->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel64->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel65->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel66->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel67->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel68->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel69->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel70->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel71->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel72->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel73->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel74->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel75->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel76->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel77->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel78->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel79->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel80->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel81->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel82->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel83->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel84->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel85->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel86->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel87->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel88->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel89->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel90->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel91->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel92->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel93->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel94->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel95->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel96->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel97->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel98->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel99->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel100->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel101->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel102->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel103->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel104->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel105->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel106->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel107->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel108->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel109->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel110->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel111->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel112->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel113->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel114->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel115->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel116->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel117->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel118->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel119->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel120->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel121->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel122->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel123->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel124->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel125->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel126->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel127->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel128->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel129->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel130->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel131->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel132->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel133->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel134->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel135->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel136->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel137->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel138->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel139->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel140->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel141->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel142->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel143->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel144->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel145->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel146->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel147->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel148->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel149->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel150->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel151->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel152->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel153->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel154->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel155->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel156->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel157->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel158->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel159->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel160->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel161->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel162->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel163->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel164->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel165->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel166->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel167->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel168->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel169->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel170->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel171->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel172->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel173->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel174->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel175->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel176->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel177->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel178->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel179->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel180->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel181->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel182->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel183->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel184->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel185->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel186->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel187->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel188->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel189->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel190->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel191->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel192->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel193->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel194->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel195->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel196->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel197->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel198->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel199->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel200->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel201->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel202->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel203->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel204->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel205->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel206->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel207->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel208->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel209->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel210->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel211->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel212->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel213->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel214->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel215->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel216->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel217->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel218->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel219->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel220->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel221->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel222->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel223->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel224->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel225->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel226->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel227->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel228->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel229->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel230->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel231->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel232->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel233->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel234->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel235->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel236->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel237->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel238->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel239->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel240->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel241->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel242->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel243->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel244->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel245->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel246->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel247->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel248->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel249->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel250->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel251->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel252->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel253->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel254->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel255->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel256->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel257->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel258->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel259->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel260->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel261->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel262->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel263->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel264->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel265->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel266->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel267->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel268->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel269->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel270->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel271->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel272->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel273->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel274->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel275->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel276->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel277->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel278->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel279->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel280->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel281->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel282->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel283->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel284->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel285->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel286->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel287->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel288->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel289->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel290->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel291->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel292->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel293->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel294->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel295->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel296->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel297->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel298->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel299->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel300->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel301->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel302->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel303->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel304->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel305->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel306->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel307->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel308->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel309->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel310->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel311->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel312->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel313->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel314->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel315->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel316->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel317->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel318->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel319->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel320->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel321->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel322->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel323->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel324->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel325->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel326->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel327->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel328->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel329->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel330->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel331->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel332->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel333->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel334->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel335->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel336->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel337->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel338->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel339->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel340->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel341->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel342->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel343->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel344->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel345->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel346->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel347->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel348->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel349->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel350->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel351->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel352->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel353->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel354->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel355->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel356->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel357->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel358->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel359->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel360->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel361->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel362->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel363->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel364->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel365->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel366->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel367->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel368->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel369->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel370->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel371->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel372->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel373->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel374->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel375->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel376->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel377->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel378->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel379->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel380->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel381->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel382->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel383->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel384->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel385->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel386->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel387->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel388->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel389->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel390->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel391->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel392->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel393->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel394->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel395->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel396->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel397->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel398->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel399->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel400->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel401->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel402->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel403->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel404->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel405->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel406->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel407->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel408->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel409->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel410->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel411->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel412->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel413->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel414->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel415->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel416->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel417->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel418->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel419->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel420->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel421->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel422->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel423->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel424->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel425->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel426->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel427->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel428->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel429->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel430->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel431->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel432->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel433->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel434->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel435->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel436->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel437->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel438->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel439->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel440->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel441->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel442->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Panel443->Connect(wxEVT_ENTER_WINDOW,(wxObjectEventFunction)&MazePathFrame::OnPanel3MouseEnter,0,this);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&MazePathFrame::CreateMaze);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&MazePathFrame::FindPath);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&MazePathFrame::ClearMaze);
    //*)

    for (int i = 0; i < 21; i++) {
        for (int j = 0; j < 21; j++) {
            maze[i][j] = ' ';
            long id = 100 + 21*i + j;
            ((wxPanel*)FindWindowById (id))->SetBackgroundColour(*wxWHITE);
        }
    }

    Update();
    Refresh();

}

MazePathFrame::~MazePathFrame()
{
    //(*Destroy(MazePathFrame)
    //*)
}

void MazePathFrame::OnPanel3MouseEnter(wxMouseEvent& event) // Creates Wall, Erase Wall, Start, End
{

    if(wxGetKeyState(WXK_CONTROL)) { // Create Wall

        ((wxPanel*)event.GetEventObject())->SetBackgroundColour(*wxBLACK);

        int temp = event.GetId();
        cout << temp << endl; // ===============================================================================================
        temp = temp - 100;
        int i = temp / 21;
        int j = temp % 21;
        maze[i][j] = 'X';

        system("cls"); // ======================================
        for (int i = 0; i < 21; i++) { // ======================================
            for (int j = 0; j < 21; j++) { // ======================================
                std::cout << maze[i][j] << " "; // ======================================
            } // ======================================
            std::cout << "\n"; // ======================================
        } // ======================================
        std::cout << event.GetId() << std::endl; // ======================================

        Update();
        Refresh();
    }

    if(wxGetKeyState(WXK_SHIFT)) { // Erase

        ((wxPanel*)event.GetEventObject())->SetBackgroundColour(*wxWHITE);

        int temp = event.GetId();
        cout << temp << endl; // ======================================
        temp = temp - 100;
        int i = temp / 21;
        int j = temp % 21;
        maze[i][j] = ' ';

        system("cls"); // ======================================
        for (int i = 0; i < 21; i++) { // ======================================
            for (int j = 0; j < 21; j++) { // ======================================
                std::cout << maze[i][j] << " "; // ======================================
            } // ======================================
            std::cout << "\n"; // ======================================
        } // ======================================
        std::cout << event.GetId() << std::endl; // ======================================

        Update();
        Refresh();
    }

    if(wxGetKeyState(WXK_CONTROL_S)) { // Start

        ((wxPanel*)event.GetEventObject())->SetBackgroundColour(*wxGREEN);
        int temp = event.GetId();
        cout << temp << endl; //=======================
        temp = temp - 100;
        int i = temp / 21;
        int j = temp % 21;
        maze[i][j] = 'S';

        system("cls"); // ==============
        for (int i = 0; i < 21; i++) { // ==============
            for (int j = 0; j < 21; j++) { // ==============
                std::cout << maze[i][j] << " "; // ==============
            } // ==============
            std::cout << "\n"; // ==============
        } // ==============
        std::cout << event.GetId() << std::endl; // ==============

        Update();
        Refresh();

    }

    if(wxGetKeyState(WXK_CONTROL_E)) { // End

        ((wxPanel*)event.GetEventObject())->SetBackgroundColour(*wxRED);

        int temp = event.GetId();
        cout << temp << endl; // ==============
        temp = temp - 100;
        int i = temp / 21;
        int j = temp % 21;
        maze[i][j] = 'E';

        system("cls"); // ==============
        for (int i = 0; i < 21; i++) {// ==============
            for (int j = 0; j < 21; j++) {// ==============
                std::cout << maze[i][j] << " ";// ==============
            }// ==============
            std::cout << "\n";// ==============
        }// ==============
        std::cout << event.GetId() << std::endl;// ==============

        Update();
        Refresh();

    }

}

void MazePathFrame::ClearMaze(wxCommandEvent& event) // Clear
{
    for (int i = 0; i < 21; i++) {
        for (int j = 0; j < 21; j++) {
            maze[i][j] = ' ';
            long id = 100 + 21*i + j;
            ((wxPanel*)FindWindowById (id))->SetBackgroundColour(*wxWHITE);
        }
    }

    Update();
    Refresh();
}

void MazePathFrame::CreateMaze(wxCommandEvent& event)
{
    int m_a = Maze->GetSelection();

    if(m_a == 0) { // Randomized Prim's Algorithm

        for (int i = 0; i < 21; i++) {
            for (int j = 0; j < 21; j++) {
                maze[i][j] = 'X';
            }
        }

        int x[20000], y[20000];

        RANDOMIZED_PRIM_S_ALGORITHM z;
        z.GenerateMaze(maze, x, y);

        for (int i = 0; i < 21; i++) {
            for (int j = 0; j < 21; j++) {
                long id = 100 + 21*i + j;
                ((wxPanel*)FindWindowById (id))->SetBackgroundColour(*wxBLACK);
            }
        }

        Update();
        Refresh();

        int i, j;
        for (int z = 0; z < 20000; z++) {
            i = x[z];
            j = y[z];

            if(i == -1 || j == -1)
                return;
            else {
                long id = 100 + 21*i + j;
                ((wxPanel*)FindWindowById(id))->SetBackgroundColour(*wxWHITE);

                Update();
                Refresh();

            }
        }

    }
    else if(m_a == 1) { // Randomized Kruskal's Algorithm

        for (int i = 0; i < 21; i++) {
            for (int j = 0; j < 21; j++) {
                maze[i][j] = 'X';
            }
        }

        int x[20000], y[20000];

        RANDOMIZED_KRUSKAL_S_ALGORITHM z;
        z.GenerateMaze(maze, x, y);

        for (int i = 0; i < 21; i++) {
            for (int j = 0; j < 21; j++) {
                long id = 100 + 21*i + j;
                ((wxPanel*)FindWindowById (id))->SetBackgroundColour(*wxBLACK);
            }
        }

        Update();
        Refresh();

        int i, j;
        for (int z = 0; z < 20000; z++) {
            i = x[z];
            j = y[z];

            if(i == -1 || j == -1)
                return;
            else {
                long id = 100 + 21*i + j;
                ((wxPanel*)FindWindowById(id))->SetBackgroundColour(*wxWHITE);

                if(z%3 == 0) {
                    Update();
                    Refresh();
                }

            }
        }

    }
    else if(m_a == 2) { // Recursive Backtracking

        for (int i = 0; i < 21; i++) {
            for (int j = 0; j < 21; j++) {
                maze[i][j] = 'X';
            }
        }

        RECURSIVE_BACKTRACKER z;

        RECURSIVE_BACKTRACKER::Cell current;
        current.X = 2;
        current.Y = 2;

        z.aaa = 0;
        for (int i = 0; i < 20000; i++) {
            z.x[i] = -1;
            z.y[i] = -1;
        }

        z.GenerateMaze(maze, current);

        for (int i = 0; i < 21; i++) {
            for (int j = 0; j < 21; j++) {
                long id = 100 + 21*i + j;
                ((wxPanel*)FindWindowById (id))->SetBackgroundColour(*wxBLACK);
            }
        }

        Update();
        Refresh();

        int i, j;
        for (int q = 0; q < 20000; q++) {
            i = z.x[q];
            j = z.y[q];

            if(i == -1 || j == -1)
                return;
            else {
                long id = 100 + 21*i + j;
                ((wxPanel*)FindWindowById(id))->SetBackgroundColour(*wxWHITE);

                Update();
                Refresh();

            }
        }

    }
    else {

    }

}

void MazePathFrame::FindPath(wxCommandEvent& event)
{
    int p_a = Path->GetSelection();

    if(p_a == 0) { // DFS

        DFS dfs(maze);

        dfs.good = 0;
        for (int i = 0; i < 20000; i++) {
            dfs.xg[i] = -1;
            dfs.yg[i] = -1;
        }

        dfs.bad = 0;
        for (int i = 0; i < 20000; i++) {
            dfs.a[i] = -1;
            dfs.b[i] = -1;
        }

        dfs.backward = 0;
        for (int i = 0; i < 20000; i++) {
            dfs.b1[i] = -1;
            dfs.b2[i] = -1;
        }

        dfs.solveMaze(maze);
        dfs.printSolution(maze);

        int i, j, q1, q2;
        for (int e = 0; e < 20000; e++) {
            i = dfs.a[e];
            j = dfs.b[e];

            q1 = dfs.b1[e];
            q2 = dfs.b2[e];

            if(i == -1 || j == -1)
                goto next;
            else if(q1 != -2 && q2 != -2) {
                long id = 100 + 21*i + j;
                ((wxPanel*)FindWindowById(id))->SetBackgroundColour(wxColour(128,0,0));

                Update();
                Refresh();

            }
            else {
                long id = 100 + 21*i + j;
                ((wxPanel*)FindWindowById(id))->SetBackgroundColour(*wxRED);

                Update();
                Refresh();

            }
        }

        next:

        int t = 0;
        while(dfs.xg[t] != -1){
            t++;
        }

        for (int e = 0; e < 20000; e++) {
            i = dfs.xg[e];
            j = dfs.yg[e];

            if(i == -1 || j == -1)
                return;
            else {
                long id = 100 + 21*i + j;
                ((wxPanel*)FindWindowById(id))->SetBackgroundColour(wxColour(0,100,int(255/t)*e));

                Update();
                Refresh();

            }
        }

    }
    else if(p_a == 1) { // BFS

        BFS bfs(maze);

        bfs.good = 0;
        for (int i = 0; i < 20000; i++) {
            bfs.xg[i] = -1;
            bfs.yg[i] = -1;
        }
        bfs.bad = 0;
        for (int i = 0; i < 20000; i++) {
            bfs.a[i] = -1;
            bfs.b[i] = -1;
        }

        bfs.solve_Maze(maze);
        bfs.printSolution(maze);

        int i, j;
        for (int e = 0; e < 20000; e++) {
            i = bfs.a[e];
            j = bfs.b[e];

            if(i == -1 || j == -1)
                goto next2;
            else {
                long id = 100 + 21*i + j;
                ((wxPanel*)FindWindowById(id))->SetBackgroundColour(wxColour(255,0,0));

                Update();
                Refresh();

            }
        }

        next2:

        int t = 0;
        while(bfs.xg[t] != -1){
            t++;
        }

        for (int e = 0; e < 20000; e++) {
            i = bfs.xg[e];
            j = bfs.yg[e];

            if(i == -1 || j == -1)
                return;
            else {
                long id = 100 + 21*i + j;
                ((wxPanel*)FindWindowById(id))->SetBackgroundColour(wxColour(0,100,int(255/t)*e));

                Update();
                Refresh();

            }
        }

    }
    else if(p_a == 2) { // A* (A Star) Search Algorithm

        A_STAR a_star;

        a_star.good = 0;
        for (int i = 0; i < 20000; i++) {
            a_star.xg[i] = -1;
            a_star.yg[i] = -1;
        }

        a_star.bad = 0;
        for (int i = 0; i < 20000; i++) {
            a_star.a[i] = -1;
            a_star.b[i] = -1;
        }

        a_star.solve_Maze(maze);

        int i, j;
        for (int e = 0; e < 20000; e++) {
            i = a_star.a[e];
            j = a_star.b[e];

            if(i == -1 || j == -1)
                goto next3;
            else {
                long id = 100 + 21*i + j;
                ((wxPanel*)FindWindowById(id))->SetBackgroundColour(wxColour(255,0,0));

                Update();
                Refresh();

            }
        }

        next3:

        int t = 0;
        while(a_star.xg[t] != -1){
            t++;
        }

        for (int e = 0; e < 20000; e++) {
            i = a_star.xg[e];
            j = a_star.yg[e];

            if(i == -1 || j == -1)
                return;
            else {
                long id = 100 + 21*i + j;
                ((wxPanel*)FindWindowById(id))->SetBackgroundColour(wxColour(0,100,int(255/t)*e));

                Update();
                Refresh();

            }
        }

    }
    else {

    }


}
