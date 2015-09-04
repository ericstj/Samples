// Win32Project1.cpp : Defines the exported functions for the DLL application.
//

#include "pch.h"
#include "cherry.h"
#include "..\cherry\resource.h"

static char * cherries =
"                                         /ddhssydho             /r/n"
"         .+ydmmmmdyo:`                 :NmmmNmmmmN:             /r/n"
"       -hmddddddddmmNNy-        ``.-/oymmmmmmNmmmo              /r/n"
"      smdddddmddddmmmmmN/`:shmmNNNNmmmmmNmmmmNm/`               /r/n"
"    `hmdddddddmmmmmmmmdmmmmmNNNNNmmmmmh+/+ymmh:                 /r/n"
"    hmdddddddmmmmmNmddddmNNh+/:ymmmmd:     ``                   /r/n"
"   oNddmmmmmmmmmmmmmNmmmM+`  -ymmmmm.                           /r/n"
"  `NmdddmmmNNNmmdddddmddmm`.smmNmmmd                            /r/n"
"  oNddmmmNmmdNddddddmdddhNydmmmdhmmm:                           /r/n"
" `NmmmmmNmdddNddddddmdhddNmmmd/``dmNd`                          /r/n"
" +MmmmmNmddddmdddddmdddmmmmm+`   -mmNy`                         /r/n"
" dNmmmmNddddmddddhdmdmmmmmy.      :mmNs`                        /r/n"
"-NddddmNdddddddddmmmmNmmm+`        :dmmy.                       /r/n"
"omdddmdmdmhsyyyso+:/mmmd:           .ymmd/                      /r/n"
"smdddmdNy-`       .dmmd-             `+dmmy:`                   /r/n"
"-mddddm/         .dmmd-                .ommmh+.`  `-:+++/-.     /r/n"
" -hmdN/         `hmmm:               .+yhdmmmmdhsshdmmdddmdy:   /r/n"
"  `:+o          smmm/              -ymdhhhhhdmmmmmmhddhhhhhmm+  /r/n"
"    `.:+o+/-`  /mmmo             `ommhhhhhhhhdddmmdhdNdhhhyhdm/ /r/n"
"  .ohmmmddddhsommmd.---.`        sNNhhhhhhhhhhmmdddmmdyssoossmd`/r/n"
" +mNmdhhhhhhhdNmmNmdddmdho.     .NNmhhhhhhhhhhhhdddhhyso/-:oodN:/r/n"
"/NNmhhhhhhhhmdmmmmdhhhhhdmm+    :NNmhhhhhhhhhhhhhhhhhyss/:/sydN+/r/n"
"hNmhhhhhhhhhhmmdddmdhyyhhhdNo   `mNmhhhhhhhhhhhhhhhhhhhysoyhhdN+/r/n"
"mNmhhhhhhhhhhhddddhsso+ssyhmN:   sNNhhhhhhhhhhhhhhhhhhhhhhhhhdN:/r/n"
"mNmhhdhhhhhhhhhhyys+:.-:syhdNy   `dNmhhhhhhhhhhhhhhhhhhhhhhhhmd /r/n"
"yNmhddhhhhhhhhhhyyso++osyyhhNh    .dNmhhhhhhhhhhhhhhhhhhhhhhdm: /r/n"
"/NmdddhhhhhhhhhhhhhhhyhhhhhdNs     .hNmdhhhhdhhhhhhhhhhhhhhdmo  /r/n"
"`dNddddhhhhhhhhhhhhhhhhhhhhmm.       +mNmdhhhhddddddhhhdddmm+   /r/n"
" :mNdhhdhhhhhhhhhhhhhhhhhhmm-         `omNmdhhhhhdddddddmmh-    /r/n"
"  +mmdhhddhhhhhhhhhhhhhhdmy.            `/smmmmdddddmmmdo-      /r/n"
"   :dNmhhddddhhhhhhhhdmmy-                  .:+oooo+/-`         /r/n"
"    `+hmmdddddddddmmmy+.                                        /r/n"
"       .:+syhhhyso/-                                            /r/n";

// This is an example of an exported function.
CHERRY_API char* GetCherries(void)
{
	return cherries;
}
