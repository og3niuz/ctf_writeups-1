#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int const data[] = {857625904, 1649679640, 156893500, 21240086, 22941311, 1090599240, 1146617856, 1498888730,
                    188419101, 335695450, 1466242385, 1717113177, 302412099, 705371403, 1532590862, 1130829627,
                    654849542, 2117818225, 1359350607, 1647787086, 1409757266, 19597574, 185421382, 52893456,
                    973410627, 122572034, 807361815, 454365465, 219418495, 490738955, 6230577, 335558216, 1426721539,
                    1545092178, 372900868, 135073044, 70063960, 640308255, 387603790, 1930714141, 17253463,
                    252971313,
                    475994948, 441451308, 1360822044, 1142489374, 286273819, 1109789983, 189009684, 456073049,
                    271602772, 218960956, 756504584, 102060631, 122034815, 508629266, 370216499, 1175224077,
                    1578962689, 1476667986, 142544666, 219482950, 238820437, 1040586001, 220024066, 374480395, 4369,
                    22498874, 475335690, 308172587, 1291861576, 1125976398, 1410350593, 4066132, 1476463636,
                    70911831,
                    2131497282, 189679105, 756504588, 218585088, 22676863, 101717523, 1415516727, 336279324,
                    268501253,
                    286866961, 478088470, 419502161, 1497044828, 926973462, 387858458, 979181378, 16981785,
                    189007668,
                    1548816640, 1532364080, 1560622623, 1647787073, 1092500525, 1194134812, 960717886, 940003934,
                    1041192035, 122573082, 705774097, 190072094, 202637374, 324884481, 303108667, 335753242,
                    1108151048, 2134249810, 255346736, 1444350784, 1462844176, 722146647, 185340994, 290609164,
                    1211137846, 1313865790, 1382168362, 289740344, 1175420699, 1594573835, 1561738335, 1312492824,
                    285874966, 70063942, 944248912, 386613263, 823332954, 102043923, 22564390, 324210947, 22501171,
                    1562000390, 1398278657, 1398223123, 20727825, 168828250, 304812357, 755913813, 21911809,
                    974799889,
                    691671301, 34875921, 291053323, 1413683327, 339480614, 1495206658, 1561755409, 1077544475,
                    1476536084, 1463425604, 756882263, 707754574, 1041567804, 1208439811, 1313938494, 507518230,
                    273945662, 337067336, 271199008, 1409498645, 444548103, 1477904220, 36443970, 2132475997,
                    89020935,
                    287969302, 257188664, 1112611390, 458755908, 386998076, 1447964937, 1595622411, 1125263644,
                    1312492800, 423887168, 940003934, 1041192035, 105795866, 823857153, 470176769, 1314062390,
                    1381306384, 71631408, 1531849501, 1578583068, 1461223191, 188161108, 134874900, 1462502981,
                    944115993, 219747392, 1045583884, 236803927, 538183211, 353380907, 1565786942, 1045329990,
                    1141640262, 508374018, 1076956507, 286197571, 507189056, 755456592, 219749129, 123558163,
                    254501688, 1196497470};

unsigned char *hash(char *a1) {
    auto *v3 = static_cast<unsigned char *>(malloc(0x34D));
    size_t v2 = strlen(a1) - 1;

    for (auto i = 0; i <= 210; i++) {

        for (auto j = 0; j <= 3; j++) {
            v3[4 * i + j] = static_cast<unsigned char>(*(a1 + (4 * i + j) % v2));
        }

        int d = data[i];
        unsigned long v = *(unsigned long *) &v3[4 * i];

        *(unsigned long *) &v3[4 * i] = v ^ d;
    }

    return v3;
}

int main() {
    unsigned char *v3;
    char *fixed = const_cast<char *>("x0r_w1th_n4nd\n");

    v3 = hash(fixed);
    printf("%s", v3);

    return 0;
}
