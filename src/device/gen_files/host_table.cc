#include "device.h"

extern int const ncclDevFuncIdCount = 673;
extern int const ncclDevFuncRowToId[] = {
/*   0*/ 672, // SendRecv
/*   1*/ 3, // AllGather RING LL
/*   2*/ 4, // AllGather RING LL128
/*   3*/ 5, // AllGather RING SIMPLE
/*   4*/ -1,
/*   5*/ -1,
/*   6*/ 0, // AllGather COLLNET_DIRECT SIMPLE
/*   7*/ -1,
/*   8*/ -1,
/*   9*/ 1, // AllGather NVLS SIMPLE
/*  10*/ -1,
/*  11*/ -1,
/*  12*/ 2, // AllGather PAT SIMPLE
/*  13*/ 345, // Broadcast RING LL
/*  14*/ 346, // Broadcast RING LL128
/*  15*/ 347, // Broadcast RING SIMPLE
/*  16*/ 6, // AllGatherV RING LL
/*  17*/ 7, // AllGatherV RING LL128
/*  18*/ 8, // AllGatherV RING SIMPLE
/*  19*/ 318, // AllReduce Sum i8 TREE LL
/*  20*/ 319, // AllReduce Sum i8 TREE LL128
/*  21*/ 320, // AllReduce Sum i8 TREE SIMPLE
/*  22*/ 315, // AllReduce Sum i8 RING LL
/*  23*/ 316, // AllReduce Sum i8 RING LL128
/*  24*/ 317, // AllReduce Sum i8 RING SIMPLE
/*  25*/ -1,
/*  26*/ -1,
/*  27*/ 314, // AllReduce Sum i8 COLLNET_DIRECT SIMPLE
/*  28*/ -1,
/*  29*/ -1,
/*  30*/ 313, // AllReduce Sum i8 COLLNET_CHAIN SIMPLE
/*  31*/ -1,
/*  32*/ -1,
/*  33*/ -1,
/*  34*/ -1,
/*  35*/ -1,
/*  36*/ -1,
/*  37*/ 318, // AllReduce Sum u8 TREE LL
/*  38*/ 319, // AllReduce Sum u8 TREE LL128
/*  39*/ 320, // AllReduce Sum u8 TREE SIMPLE
/*  40*/ 315, // AllReduce Sum u8 RING LL
/*  41*/ 316, // AllReduce Sum u8 RING LL128
/*  42*/ 317, // AllReduce Sum u8 RING SIMPLE
/*  43*/ -1,
/*  44*/ -1,
/*  45*/ 314, // AllReduce Sum u8 COLLNET_DIRECT SIMPLE
/*  46*/ -1,
/*  47*/ -1,
/*  48*/ 313, // AllReduce Sum u8 COLLNET_CHAIN SIMPLE
/*  49*/ -1,
/*  50*/ -1,
/*  51*/ -1,
/*  52*/ -1,
/*  53*/ -1,
/*  54*/ -1,
/*  55*/ 300, // AllReduce Sum i32 TREE LL
/*  56*/ 301, // AllReduce Sum i32 TREE LL128
/*  57*/ 302, // AllReduce Sum i32 TREE SIMPLE
/*  58*/ 297, // AllReduce Sum i32 RING LL
/*  59*/ 298, // AllReduce Sum i32 RING LL128
/*  60*/ 299, // AllReduce Sum i32 RING SIMPLE
/*  61*/ -1,
/*  62*/ -1,
/*  63*/ 294, // AllReduce Sum i32 COLLNET_DIRECT SIMPLE
/*  64*/ -1,
/*  65*/ -1,
/*  66*/ 293, // AllReduce Sum i32 COLLNET_CHAIN SIMPLE
/*  67*/ -1,
/*  68*/ -1,
/*  69*/ 295, // AllReduce Sum i32 NVLS SIMPLE
/*  70*/ -1,
/*  71*/ -1,
/*  72*/ 296, // AllReduce Sum i32 NVLS_TREE SIMPLE
/*  73*/ 300, // AllReduce Sum u32 TREE LL
/*  74*/ 301, // AllReduce Sum u32 TREE LL128
/*  75*/ 302, // AllReduce Sum u32 TREE SIMPLE
/*  76*/ 297, // AllReduce Sum u32 RING LL
/*  77*/ 298, // AllReduce Sum u32 RING LL128
/*  78*/ 299, // AllReduce Sum u32 RING SIMPLE
/*  79*/ -1,
/*  80*/ -1,
/*  81*/ 294, // AllReduce Sum u32 COLLNET_DIRECT SIMPLE
/*  82*/ -1,
/*  83*/ -1,
/*  84*/ 293, // AllReduce Sum u32 COLLNET_CHAIN SIMPLE
/*  85*/ -1,
/*  86*/ -1,
/*  87*/ 295, // AllReduce Sum u32 NVLS SIMPLE
/*  88*/ -1,
/*  89*/ -1,
/*  90*/ 296, // AllReduce Sum u32 NVLS_TREE SIMPLE
/*  91*/ 310, // AllReduce Sum i64 TREE LL
/*  92*/ 311, // AllReduce Sum i64 TREE LL128
/*  93*/ 312, // AllReduce Sum i64 TREE SIMPLE
/*  94*/ 307, // AllReduce Sum i64 RING LL
/*  95*/ 308, // AllReduce Sum i64 RING LL128
/*  96*/ 309, // AllReduce Sum i64 RING SIMPLE
/*  97*/ -1,
/*  98*/ -1,
/*  99*/ 304, // AllReduce Sum i64 COLLNET_DIRECT SIMPLE
/* 100*/ -1,
/* 101*/ -1,
/* 102*/ 303, // AllReduce Sum i64 COLLNET_CHAIN SIMPLE
/* 103*/ -1,
/* 104*/ -1,
/* 105*/ 305, // AllReduce Sum i64 NVLS SIMPLE
/* 106*/ -1,
/* 107*/ -1,
/* 108*/ 306, // AllReduce Sum i64 NVLS_TREE SIMPLE
/* 109*/ 310, // AllReduce Sum u64 TREE LL
/* 110*/ 311, // AllReduce Sum u64 TREE LL128
/* 111*/ 312, // AllReduce Sum u64 TREE SIMPLE
/* 112*/ 307, // AllReduce Sum u64 RING LL
/* 113*/ 308, // AllReduce Sum u64 RING LL128
/* 114*/ 309, // AllReduce Sum u64 RING SIMPLE
/* 115*/ -1,
/* 116*/ -1,
/* 117*/ 304, // AllReduce Sum u64 COLLNET_DIRECT SIMPLE
/* 118*/ -1,
/* 119*/ -1,
/* 120*/ 303, // AllReduce Sum u64 COLLNET_CHAIN SIMPLE
/* 121*/ -1,
/* 122*/ -1,
/* 123*/ 305, // AllReduce Sum u64 NVLS SIMPLE
/* 124*/ -1,
/* 125*/ -1,
/* 126*/ 306, // AllReduce Sum u64 NVLS_TREE SIMPLE
/* 127*/ 254, // AllReduce Sum f16 TREE LL
/* 128*/ 255, // AllReduce Sum f16 TREE LL128
/* 129*/ 256, // AllReduce Sum f16 TREE SIMPLE
/* 130*/ 251, // AllReduce Sum f16 RING LL
/* 131*/ 252, // AllReduce Sum f16 RING LL128
/* 132*/ 253, // AllReduce Sum f16 RING SIMPLE
/* 133*/ -1,
/* 134*/ -1,
/* 135*/ 248, // AllReduce Sum f16 COLLNET_DIRECT SIMPLE
/* 136*/ -1,
/* 137*/ -1,
/* 138*/ 247, // AllReduce Sum f16 COLLNET_CHAIN SIMPLE
/* 139*/ -1,
/* 140*/ -1,
/* 141*/ 249, // AllReduce Sum f16 NVLS SIMPLE
/* 142*/ -1,
/* 143*/ -1,
/* 144*/ 250, // AllReduce Sum f16 NVLS_TREE SIMPLE
/* 145*/ 264, // AllReduce Sum f32 TREE LL
/* 146*/ 265, // AllReduce Sum f32 TREE LL128
/* 147*/ 266, // AllReduce Sum f32 TREE SIMPLE
/* 148*/ 261, // AllReduce Sum f32 RING LL
/* 149*/ 262, // AllReduce Sum f32 RING LL128
/* 150*/ 263, // AllReduce Sum f32 RING SIMPLE
/* 151*/ -1,
/* 152*/ -1,
/* 153*/ 258, // AllReduce Sum f32 COLLNET_DIRECT SIMPLE
/* 154*/ -1,
/* 155*/ -1,
/* 156*/ 257, // AllReduce Sum f32 COLLNET_CHAIN SIMPLE
/* 157*/ -1,
/* 158*/ -1,
/* 159*/ 259, // AllReduce Sum f32 NVLS SIMPLE
/* 160*/ -1,
/* 161*/ -1,
/* 162*/ 260, // AllReduce Sum f32 NVLS_TREE SIMPLE
/* 163*/ 274, // AllReduce Sum f64 TREE LL
/* 164*/ 275, // AllReduce Sum f64 TREE LL128
/* 165*/ 276, // AllReduce Sum f64 TREE SIMPLE
/* 166*/ 271, // AllReduce Sum f64 RING LL
/* 167*/ 272, // AllReduce Sum f64 RING LL128
/* 168*/ 273, // AllReduce Sum f64 RING SIMPLE
/* 169*/ -1,
/* 170*/ -1,
/* 171*/ 268, // AllReduce Sum f64 COLLNET_DIRECT SIMPLE
/* 172*/ -1,
/* 173*/ -1,
/* 174*/ 267, // AllReduce Sum f64 COLLNET_CHAIN SIMPLE
/* 175*/ -1,
/* 176*/ -1,
/* 177*/ 269, // AllReduce Sum f64 NVLS SIMPLE
/* 178*/ -1,
/* 179*/ -1,
/* 180*/ 270, // AllReduce Sum f64 NVLS_TREE SIMPLE
/* 181*/ 244, // AllReduce Sum bf16 TREE LL
/* 182*/ 245, // AllReduce Sum bf16 TREE LL128
/* 183*/ 246, // AllReduce Sum bf16 TREE SIMPLE
/* 184*/ 241, // AllReduce Sum bf16 RING LL
/* 185*/ 242, // AllReduce Sum bf16 RING LL128
/* 186*/ 243, // AllReduce Sum bf16 RING SIMPLE
/* 187*/ -1,
/* 188*/ -1,
/* 189*/ 238, // AllReduce Sum bf16 COLLNET_DIRECT SIMPLE
/* 190*/ -1,
/* 191*/ -1,
/* 192*/ 237, // AllReduce Sum bf16 COLLNET_CHAIN SIMPLE
/* 193*/ -1,
/* 194*/ -1,
/* 195*/ 239, // AllReduce Sum bf16 NVLS SIMPLE
/* 196*/ -1,
/* 197*/ -1,
/* 198*/ 240, // AllReduce Sum bf16 NVLS_TREE SIMPLE
/* 199*/ 282, // AllReduce Sum f8e4m3 TREE LL
/* 200*/ 283, // AllReduce Sum f8e4m3 TREE LL128
/* 201*/ 284, // AllReduce Sum f8e4m3 TREE SIMPLE
/* 202*/ 279, // AllReduce Sum f8e4m3 RING LL
/* 203*/ 280, // AllReduce Sum f8e4m3 RING LL128
/* 204*/ 281, // AllReduce Sum f8e4m3 RING SIMPLE
/* 205*/ -1,
/* 206*/ -1,
/* 207*/ 278, // AllReduce Sum f8e4m3 COLLNET_DIRECT SIMPLE
/* 208*/ -1,
/* 209*/ -1,
/* 210*/ 277, // AllReduce Sum f8e4m3 COLLNET_CHAIN SIMPLE
/* 211*/ -1,
/* 212*/ -1,
/* 213*/ -1,
/* 214*/ -1,
/* 215*/ -1,
/* 216*/ -1,
/* 217*/ 290, // AllReduce Sum f8e5m2 TREE LL
/* 218*/ 291, // AllReduce Sum f8e5m2 TREE LL128
/* 219*/ 292, // AllReduce Sum f8e5m2 TREE SIMPLE
/* 220*/ 287, // AllReduce Sum f8e5m2 RING LL
/* 221*/ 288, // AllReduce Sum f8e5m2 RING LL128
/* 222*/ 289, // AllReduce Sum f8e5m2 RING SIMPLE
/* 223*/ -1,
/* 224*/ -1,
/* 225*/ 286, // AllReduce Sum f8e5m2 COLLNET_DIRECT SIMPLE
/* 226*/ -1,
/* 227*/ -1,
/* 228*/ 285, // AllReduce Sum f8e5m2 COLLNET_CHAIN SIMPLE
/* 229*/ -1,
/* 230*/ -1,
/* 231*/ -1,
/* 232*/ -1,
/* 233*/ -1,
/* 234*/ -1,
/* 235*/ 234, // AllReduce Prod i8 TREE LL
/* 236*/ 235, // AllReduce Prod i8 TREE LL128
/* 237*/ 236, // AllReduce Prod i8 TREE SIMPLE
/* 238*/ 231, // AllReduce Prod i8 RING LL
/* 239*/ 232, // AllReduce Prod i8 RING LL128
/* 240*/ 233, // AllReduce Prod i8 RING SIMPLE
/* 241*/ -1,
/* 242*/ -1,
/* 243*/ 230, // AllReduce Prod i8 COLLNET_DIRECT SIMPLE
/* 244*/ -1,
/* 245*/ -1,
/* 246*/ 229, // AllReduce Prod i8 COLLNET_CHAIN SIMPLE
/* 247*/ -1,
/* 248*/ -1,
/* 249*/ -1,
/* 250*/ -1,
/* 251*/ -1,
/* 252*/ -1,
/* 253*/ 234, // AllReduce Prod u8 TREE LL
/* 254*/ 235, // AllReduce Prod u8 TREE LL128
/* 255*/ 236, // AllReduce Prod u8 TREE SIMPLE
/* 256*/ 231, // AllReduce Prod u8 RING LL
/* 257*/ 232, // AllReduce Prod u8 RING LL128
/* 258*/ 233, // AllReduce Prod u8 RING SIMPLE
/* 259*/ -1,
/* 260*/ -1,
/* 261*/ 230, // AllReduce Prod u8 COLLNET_DIRECT SIMPLE
/* 262*/ -1,
/* 263*/ -1,
/* 264*/ 229, // AllReduce Prod u8 COLLNET_CHAIN SIMPLE
/* 265*/ -1,
/* 266*/ -1,
/* 267*/ -1,
/* 268*/ -1,
/* 269*/ -1,
/* 270*/ -1,
/* 271*/ 218, // AllReduce Prod i32 TREE LL
/* 272*/ 219, // AllReduce Prod i32 TREE LL128
/* 273*/ 220, // AllReduce Prod i32 TREE SIMPLE
/* 274*/ 215, // AllReduce Prod i32 RING LL
/* 275*/ 216, // AllReduce Prod i32 RING LL128
/* 276*/ 217, // AllReduce Prod i32 RING SIMPLE
/* 277*/ -1,
/* 278*/ -1,
/* 279*/ 214, // AllReduce Prod i32 COLLNET_DIRECT SIMPLE
/* 280*/ -1,
/* 281*/ -1,
/* 282*/ 213, // AllReduce Prod i32 COLLNET_CHAIN SIMPLE
/* 283*/ -1,
/* 284*/ -1,
/* 285*/ -1,
/* 286*/ -1,
/* 287*/ -1,
/* 288*/ -1,
/* 289*/ 218, // AllReduce Prod u32 TREE LL
/* 290*/ 219, // AllReduce Prod u32 TREE LL128
/* 291*/ 220, // AllReduce Prod u32 TREE SIMPLE
/* 292*/ 215, // AllReduce Prod u32 RING LL
/* 293*/ 216, // AllReduce Prod u32 RING LL128
/* 294*/ 217, // AllReduce Prod u32 RING SIMPLE
/* 295*/ -1,
/* 296*/ -1,
/* 297*/ 214, // AllReduce Prod u32 COLLNET_DIRECT SIMPLE
/* 298*/ -1,
/* 299*/ -1,
/* 300*/ 213, // AllReduce Prod u32 COLLNET_CHAIN SIMPLE
/* 301*/ -1,
/* 302*/ -1,
/* 303*/ -1,
/* 304*/ -1,
/* 305*/ -1,
/* 306*/ -1,
/* 307*/ 226, // AllReduce Prod i64 TREE LL
/* 308*/ 227, // AllReduce Prod i64 TREE LL128
/* 309*/ 228, // AllReduce Prod i64 TREE SIMPLE
/* 310*/ 223, // AllReduce Prod i64 RING LL
/* 311*/ 224, // AllReduce Prod i64 RING LL128
/* 312*/ 225, // AllReduce Prod i64 RING SIMPLE
/* 313*/ -1,
/* 314*/ -1,
/* 315*/ 222, // AllReduce Prod i64 COLLNET_DIRECT SIMPLE
/* 316*/ -1,
/* 317*/ -1,
/* 318*/ 221, // AllReduce Prod i64 COLLNET_CHAIN SIMPLE
/* 319*/ -1,
/* 320*/ -1,
/* 321*/ -1,
/* 322*/ -1,
/* 323*/ -1,
/* 324*/ -1,
/* 325*/ 226, // AllReduce Prod u64 TREE LL
/* 326*/ 227, // AllReduce Prod u64 TREE LL128
/* 327*/ 228, // AllReduce Prod u64 TREE SIMPLE
/* 328*/ 223, // AllReduce Prod u64 RING LL
/* 329*/ 224, // AllReduce Prod u64 RING LL128
/* 330*/ 225, // AllReduce Prod u64 RING SIMPLE
/* 331*/ -1,
/* 332*/ -1,
/* 333*/ 222, // AllReduce Prod u64 COLLNET_DIRECT SIMPLE
/* 334*/ -1,
/* 335*/ -1,
/* 336*/ 221, // AllReduce Prod u64 COLLNET_CHAIN SIMPLE
/* 337*/ -1,
/* 338*/ -1,
/* 339*/ -1,
/* 340*/ -1,
/* 341*/ -1,
/* 342*/ -1,
/* 343*/ 178, // AllReduce Prod f16 TREE LL
/* 344*/ 179, // AllReduce Prod f16 TREE LL128
/* 345*/ 180, // AllReduce Prod f16 TREE SIMPLE
/* 346*/ 175, // AllReduce Prod f16 RING LL
/* 347*/ 176, // AllReduce Prod f16 RING LL128
/* 348*/ 177, // AllReduce Prod f16 RING SIMPLE
/* 349*/ -1,
/* 350*/ -1,
/* 351*/ 174, // AllReduce Prod f16 COLLNET_DIRECT SIMPLE
/* 352*/ -1,
/* 353*/ -1,
/* 354*/ 173, // AllReduce Prod f16 COLLNET_CHAIN SIMPLE
/* 355*/ -1,
/* 356*/ -1,
/* 357*/ -1,
/* 358*/ -1,
/* 359*/ -1,
/* 360*/ -1,
/* 361*/ 186, // AllReduce Prod f32 TREE LL
/* 362*/ 187, // AllReduce Prod f32 TREE LL128
/* 363*/ 188, // AllReduce Prod f32 TREE SIMPLE
/* 364*/ 183, // AllReduce Prod f32 RING LL
/* 365*/ 184, // AllReduce Prod f32 RING LL128
/* 366*/ 185, // AllReduce Prod f32 RING SIMPLE
/* 367*/ -1,
/* 368*/ -1,
/* 369*/ 182, // AllReduce Prod f32 COLLNET_DIRECT SIMPLE
/* 370*/ -1,
/* 371*/ -1,
/* 372*/ 181, // AllReduce Prod f32 COLLNET_CHAIN SIMPLE
/* 373*/ -1,
/* 374*/ -1,
/* 375*/ -1,
/* 376*/ -1,
/* 377*/ -1,
/* 378*/ -1,
/* 379*/ 194, // AllReduce Prod f64 TREE LL
/* 380*/ 195, // AllReduce Prod f64 TREE LL128
/* 381*/ 196, // AllReduce Prod f64 TREE SIMPLE
/* 382*/ 191, // AllReduce Prod f64 RING LL
/* 383*/ 192, // AllReduce Prod f64 RING LL128
/* 384*/ 193, // AllReduce Prod f64 RING SIMPLE
/* 385*/ -1,
/* 386*/ -1,
/* 387*/ 190, // AllReduce Prod f64 COLLNET_DIRECT SIMPLE
/* 388*/ -1,
/* 389*/ -1,
/* 390*/ 189, // AllReduce Prod f64 COLLNET_CHAIN SIMPLE
/* 391*/ -1,
/* 392*/ -1,
/* 393*/ -1,
/* 394*/ -1,
/* 395*/ -1,
/* 396*/ -1,
/* 397*/ 170, // AllReduce Prod bf16 TREE LL
/* 398*/ 171, // AllReduce Prod bf16 TREE LL128
/* 399*/ 172, // AllReduce Prod bf16 TREE SIMPLE
/* 400*/ 167, // AllReduce Prod bf16 RING LL
/* 401*/ 168, // AllReduce Prod bf16 RING LL128
/* 402*/ 169, // AllReduce Prod bf16 RING SIMPLE
/* 403*/ -1,
/* 404*/ -1,
/* 405*/ 166, // AllReduce Prod bf16 COLLNET_DIRECT SIMPLE
/* 406*/ -1,
/* 407*/ -1,
/* 408*/ 165, // AllReduce Prod bf16 COLLNET_CHAIN SIMPLE
/* 409*/ -1,
/* 410*/ -1,
/* 411*/ -1,
/* 412*/ -1,
/* 413*/ -1,
/* 414*/ -1,
/* 415*/ 202, // AllReduce Prod f8e4m3 TREE LL
/* 416*/ 203, // AllReduce Prod f8e4m3 TREE LL128
/* 417*/ 204, // AllReduce Prod f8e4m3 TREE SIMPLE
/* 418*/ 199, // AllReduce Prod f8e4m3 RING LL
/* 419*/ 200, // AllReduce Prod f8e4m3 RING LL128
/* 420*/ 201, // AllReduce Prod f8e4m3 RING SIMPLE
/* 421*/ -1,
/* 422*/ -1,
/* 423*/ 198, // AllReduce Prod f8e4m3 COLLNET_DIRECT SIMPLE
/* 424*/ -1,
/* 425*/ -1,
/* 426*/ 197, // AllReduce Prod f8e4m3 COLLNET_CHAIN SIMPLE
/* 427*/ -1,
/* 428*/ -1,
/* 429*/ -1,
/* 430*/ -1,
/* 431*/ -1,
/* 432*/ -1,
/* 433*/ 210, // AllReduce Prod f8e5m2 TREE LL
/* 434*/ 211, // AllReduce Prod f8e5m2 TREE LL128
/* 435*/ 212, // AllReduce Prod f8e5m2 TREE SIMPLE
/* 436*/ 207, // AllReduce Prod f8e5m2 RING LL
/* 437*/ 208, // AllReduce Prod f8e5m2 RING LL128
/* 438*/ 209, // AllReduce Prod f8e5m2 RING SIMPLE
/* 439*/ -1,
/* 440*/ -1,
/* 441*/ 206, // AllReduce Prod f8e5m2 COLLNET_DIRECT SIMPLE
/* 442*/ -1,
/* 443*/ -1,
/* 444*/ 205, // AllReduce Prod f8e5m2 COLLNET_CHAIN SIMPLE
/* 445*/ -1,
/* 446*/ -1,
/* 447*/ -1,
/* 448*/ -1,
/* 449*/ -1,
/* 450*/ -1,
/* 451*/ 90, // AllReduce MinMax i8 TREE LL
/* 452*/ 91, // AllReduce MinMax i8 TREE LL128
/* 453*/ 92, // AllReduce MinMax i8 TREE SIMPLE
/* 454*/ 87, // AllReduce MinMax i8 RING LL
/* 455*/ 88, // AllReduce MinMax i8 RING LL128
/* 456*/ 89, // AllReduce MinMax i8 RING SIMPLE
/* 457*/ -1,
/* 458*/ -1,
/* 459*/ 86, // AllReduce MinMax i8 COLLNET_DIRECT SIMPLE
/* 460*/ -1,
/* 461*/ -1,
/* 462*/ 85, // AllReduce MinMax i8 COLLNET_CHAIN SIMPLE
/* 463*/ -1,
/* 464*/ -1,
/* 465*/ -1,
/* 466*/ -1,
/* 467*/ -1,
/* 468*/ -1,
/* 469*/ 90, // AllReduce MinMax u8 TREE LL
/* 470*/ 91, // AllReduce MinMax u8 TREE LL128
/* 471*/ 92, // AllReduce MinMax u8 TREE SIMPLE
/* 472*/ 87, // AllReduce MinMax u8 RING LL
/* 473*/ 88, // AllReduce MinMax u8 RING LL128
/* 474*/ 89, // AllReduce MinMax u8 RING SIMPLE
/* 475*/ -1,
/* 476*/ -1,
/* 477*/ 86, // AllReduce MinMax u8 COLLNET_DIRECT SIMPLE
/* 478*/ -1,
/* 479*/ -1,
/* 480*/ 85, // AllReduce MinMax u8 COLLNET_CHAIN SIMPLE
/* 481*/ -1,
/* 482*/ -1,
/* 483*/ -1,
/* 484*/ -1,
/* 485*/ -1,
/* 486*/ -1,
/* 487*/ 72, // AllReduce MinMax i32 TREE LL
/* 488*/ 73, // AllReduce MinMax i32 TREE LL128
/* 489*/ 74, // AllReduce MinMax i32 TREE SIMPLE
/* 490*/ 69, // AllReduce MinMax i32 RING LL
/* 491*/ 70, // AllReduce MinMax i32 RING LL128
/* 492*/ 71, // AllReduce MinMax i32 RING SIMPLE
/* 493*/ -1,
/* 494*/ -1,
/* 495*/ 66, // AllReduce MinMax i32 COLLNET_DIRECT SIMPLE
/* 496*/ -1,
/* 497*/ -1,
/* 498*/ 65, // AllReduce MinMax i32 COLLNET_CHAIN SIMPLE
/* 499*/ -1,
/* 500*/ -1,
/* 501*/ 61, // AllReduce MinMax i32 NVLS SIMPLE
/* 502*/ -1,
/* 503*/ -1,
/* 504*/ 62, // AllReduce MinMax i32 NVLS_TREE SIMPLE
/* 505*/ 72, // AllReduce MinMax u32 TREE LL
/* 506*/ 73, // AllReduce MinMax u32 TREE LL128
/* 507*/ 74, // AllReduce MinMax u32 TREE SIMPLE
/* 508*/ 69, // AllReduce MinMax u32 RING LL
/* 509*/ 70, // AllReduce MinMax u32 RING LL128
/* 510*/ 71, // AllReduce MinMax u32 RING SIMPLE
/* 511*/ -1,
/* 512*/ -1,
/* 513*/ 66, // AllReduce MinMax u32 COLLNET_DIRECT SIMPLE
/* 514*/ -1,
/* 515*/ -1,
/* 516*/ 65, // AllReduce MinMax u32 COLLNET_CHAIN SIMPLE
/* 517*/ -1,
/* 518*/ -1,
/* 519*/ 67, // AllReduce MinMax u32 NVLS SIMPLE
/* 520*/ -1,
/* 521*/ -1,
/* 522*/ 68, // AllReduce MinMax u32 NVLS_TREE SIMPLE
/* 523*/ 82, // AllReduce MinMax i64 TREE LL
/* 524*/ 83, // AllReduce MinMax i64 TREE LL128
/* 525*/ 84, // AllReduce MinMax i64 TREE SIMPLE
/* 526*/ 79, // AllReduce MinMax i64 RING LL
/* 527*/ 80, // AllReduce MinMax i64 RING LL128
/* 528*/ 81, // AllReduce MinMax i64 RING SIMPLE
/* 529*/ -1,
/* 530*/ -1,
/* 531*/ 76, // AllReduce MinMax i64 COLLNET_DIRECT SIMPLE
/* 532*/ -1,
/* 533*/ -1,
/* 534*/ 75, // AllReduce MinMax i64 COLLNET_CHAIN SIMPLE
/* 535*/ -1,
/* 536*/ -1,
/* 537*/ 63, // AllReduce MinMax i64 NVLS SIMPLE
/* 538*/ -1,
/* 539*/ -1,
/* 540*/ 64, // AllReduce MinMax i64 NVLS_TREE SIMPLE
/* 541*/ 82, // AllReduce MinMax u64 TREE LL
/* 542*/ 83, // AllReduce MinMax u64 TREE LL128
/* 543*/ 84, // AllReduce MinMax u64 TREE SIMPLE
/* 544*/ 79, // AllReduce MinMax u64 RING LL
/* 545*/ 80, // AllReduce MinMax u64 RING LL128
/* 546*/ 81, // AllReduce MinMax u64 RING SIMPLE
/* 547*/ -1,
/* 548*/ -1,
/* 549*/ 76, // AllReduce MinMax u64 COLLNET_DIRECT SIMPLE
/* 550*/ -1,
/* 551*/ -1,
/* 552*/ 75, // AllReduce MinMax u64 COLLNET_CHAIN SIMPLE
/* 553*/ -1,
/* 554*/ -1,
/* 555*/ 77, // AllReduce MinMax u64 NVLS SIMPLE
/* 556*/ -1,
/* 557*/ -1,
/* 558*/ 78, // AllReduce MinMax u64 NVLS_TREE SIMPLE
/* 559*/ 26, // AllReduce MinMax f16 TREE LL
/* 560*/ 27, // AllReduce MinMax f16 TREE LL128
/* 561*/ 28, // AllReduce MinMax f16 TREE SIMPLE
/* 562*/ 23, // AllReduce MinMax f16 RING LL
/* 563*/ 24, // AllReduce MinMax f16 RING LL128
/* 564*/ 25, // AllReduce MinMax f16 RING SIMPLE
/* 565*/ -1,
/* 566*/ -1,
/* 567*/ 20, // AllReduce MinMax f16 COLLNET_DIRECT SIMPLE
/* 568*/ -1,
/* 569*/ -1,
/* 570*/ 19, // AllReduce MinMax f16 COLLNET_CHAIN SIMPLE
/* 571*/ -1,
/* 572*/ -1,
/* 573*/ 21, // AllReduce MinMax f16 NVLS SIMPLE
/* 574*/ -1,
/* 575*/ -1,
/* 576*/ 22, // AllReduce MinMax f16 NVLS_TREE SIMPLE
/* 577*/ 34, // AllReduce MinMax f32 TREE LL
/* 578*/ 35, // AllReduce MinMax f32 TREE LL128
/* 579*/ 36, // AllReduce MinMax f32 TREE SIMPLE
/* 580*/ 31, // AllReduce MinMax f32 RING LL
/* 581*/ 32, // AllReduce MinMax f32 RING LL128
/* 582*/ 33, // AllReduce MinMax f32 RING SIMPLE
/* 583*/ -1,
/* 584*/ -1,
/* 585*/ 30, // AllReduce MinMax f32 COLLNET_DIRECT SIMPLE
/* 586*/ -1,
/* 587*/ -1,
/* 588*/ 29, // AllReduce MinMax f32 COLLNET_CHAIN SIMPLE
/* 589*/ -1,
/* 590*/ -1,
/* 591*/ -1,
/* 592*/ -1,
/* 593*/ -1,
/* 594*/ -1,
/* 595*/ 42, // AllReduce MinMax f64 TREE LL
/* 596*/ 43, // AllReduce MinMax f64 TREE LL128
/* 597*/ 44, // AllReduce MinMax f64 TREE SIMPLE
/* 598*/ 39, // AllReduce MinMax f64 RING LL
/* 599*/ 40, // AllReduce MinMax f64 RING LL128
/* 600*/ 41, // AllReduce MinMax f64 RING SIMPLE
/* 601*/ -1,
/* 602*/ -1,
/* 603*/ 38, // AllReduce MinMax f64 COLLNET_DIRECT SIMPLE
/* 604*/ -1,
/* 605*/ -1,
/* 606*/ 37, // AllReduce MinMax f64 COLLNET_CHAIN SIMPLE
/* 607*/ -1,
/* 608*/ -1,
/* 609*/ -1,
/* 610*/ -1,
/* 611*/ -1,
/* 612*/ -1,
/* 613*/ 16, // AllReduce MinMax bf16 TREE LL
/* 614*/ 17, // AllReduce MinMax bf16 TREE LL128
/* 615*/ 18, // AllReduce MinMax bf16 TREE SIMPLE
/* 616*/ 13, // AllReduce MinMax bf16 RING LL
/* 617*/ 14, // AllReduce MinMax bf16 RING LL128
/* 618*/ 15, // AllReduce MinMax bf16 RING SIMPLE
/* 619*/ -1,
/* 620*/ -1,
/* 621*/ 10, // AllReduce MinMax bf16 COLLNET_DIRECT SIMPLE
/* 622*/ -1,
/* 623*/ -1,
/* 624*/ 9, // AllReduce MinMax bf16 COLLNET_CHAIN SIMPLE
/* 625*/ -1,
/* 626*/ -1,
/* 627*/ 11, // AllReduce MinMax bf16 NVLS SIMPLE
/* 628*/ -1,
/* 629*/ -1,
/* 630*/ 12, // AllReduce MinMax bf16 NVLS_TREE SIMPLE
/* 631*/ 50, // AllReduce MinMax f8e4m3 TREE LL
/* 632*/ 51, // AllReduce MinMax f8e4m3 TREE LL128
/* 633*/ 52, // AllReduce MinMax f8e4m3 TREE SIMPLE
/* 634*/ 47, // AllReduce MinMax f8e4m3 RING LL
/* 635*/ 48, // AllReduce MinMax f8e4m3 RING LL128
/* 636*/ 49, // AllReduce MinMax f8e4m3 RING SIMPLE
/* 637*/ -1,
/* 638*/ -1,
/* 639*/ 46, // AllReduce MinMax f8e4m3 COLLNET_DIRECT SIMPLE
/* 640*/ -1,
/* 641*/ -1,
/* 642*/ 45, // AllReduce MinMax f8e4m3 COLLNET_CHAIN SIMPLE
/* 643*/ -1,
/* 644*/ -1,
/* 645*/ -1,
/* 646*/ -1,
/* 647*/ -1,
/* 648*/ -1,
/* 649*/ 58, // AllReduce MinMax f8e5m2 TREE LL
/* 650*/ 59, // AllReduce MinMax f8e5m2 TREE LL128
/* 651*/ 60, // AllReduce MinMax f8e5m2 TREE SIMPLE
/* 652*/ 55, // AllReduce MinMax f8e5m2 RING LL
/* 653*/ 56, // AllReduce MinMax f8e5m2 RING LL128
/* 654*/ 57, // AllReduce MinMax f8e5m2 RING SIMPLE
/* 655*/ -1,
/* 656*/ -1,
/* 657*/ 54, // AllReduce MinMax f8e5m2 COLLNET_DIRECT SIMPLE
/* 658*/ -1,
/* 659*/ -1,
/* 660*/ 53, // AllReduce MinMax f8e5m2 COLLNET_CHAIN SIMPLE
/* 661*/ -1,
/* 662*/ -1,
/* 663*/ -1,
/* 664*/ -1,
/* 665*/ -1,
/* 666*/ -1,
/* 667*/ 162, // AllReduce PreMulSum i8 TREE LL
/* 668*/ 163, // AllReduce PreMulSum i8 TREE LL128
/* 669*/ 164, // AllReduce PreMulSum i8 TREE SIMPLE
/* 670*/ 159, // AllReduce PreMulSum i8 RING LL
/* 671*/ 160, // AllReduce PreMulSum i8 RING LL128
/* 672*/ 161, // AllReduce PreMulSum i8 RING SIMPLE
/* 673*/ -1,
/* 674*/ -1,
/* 675*/ 158, // AllReduce PreMulSum i8 COLLNET_DIRECT SIMPLE
/* 676*/ -1,
/* 677*/ -1,
/* 678*/ 157, // AllReduce PreMulSum i8 COLLNET_CHAIN SIMPLE
/* 679*/ -1,
/* 680*/ -1,
/* 681*/ -1,
/* 682*/ -1,
/* 683*/ -1,
/* 684*/ -1,
/* 685*/ 162, // AllReduce PreMulSum u8 TREE LL
/* 686*/ 163, // AllReduce PreMulSum u8 TREE LL128
/* 687*/ 164, // AllReduce PreMulSum u8 TREE SIMPLE
/* 688*/ 159, // AllReduce PreMulSum u8 RING LL
/* 689*/ 160, // AllReduce PreMulSum u8 RING LL128
/* 690*/ 161, // AllReduce PreMulSum u8 RING SIMPLE
/* 691*/ -1,
/* 692*/ -1,
/* 693*/ 158, // AllReduce PreMulSum u8 COLLNET_DIRECT SIMPLE
/* 694*/ -1,
/* 695*/ -1,
/* 696*/ 157, // AllReduce PreMulSum u8 COLLNET_CHAIN SIMPLE
/* 697*/ -1,
/* 698*/ -1,
/* 699*/ -1,
/* 700*/ -1,
/* 701*/ -1,
/* 702*/ -1,
/* 703*/ 146, // AllReduce PreMulSum i32 TREE LL
/* 704*/ 147, // AllReduce PreMulSum i32 TREE LL128
/* 705*/ 148, // AllReduce PreMulSum i32 TREE SIMPLE
/* 706*/ 143, // AllReduce PreMulSum i32 RING LL
/* 707*/ 144, // AllReduce PreMulSum i32 RING LL128
/* 708*/ 145, // AllReduce PreMulSum i32 RING SIMPLE
/* 709*/ -1,
/* 710*/ -1,
/* 711*/ 142, // AllReduce PreMulSum i32 COLLNET_DIRECT SIMPLE
/* 712*/ -1,
/* 713*/ -1,
/* 714*/ 141, // AllReduce PreMulSum i32 COLLNET_CHAIN SIMPLE
/* 715*/ -1,
/* 716*/ -1,
/* 717*/ -1,
/* 718*/ -1,
/* 719*/ -1,
/* 720*/ -1,
/* 721*/ 146, // AllReduce PreMulSum u32 TREE LL
/* 722*/ 147, // AllReduce PreMulSum u32 TREE LL128
/* 723*/ 148, // AllReduce PreMulSum u32 TREE SIMPLE
/* 724*/ 143, // AllReduce PreMulSum u32 RING LL
/* 725*/ 144, // AllReduce PreMulSum u32 RING LL128
/* 726*/ 145, // AllReduce PreMulSum u32 RING SIMPLE
/* 727*/ -1,
/* 728*/ -1,
/* 729*/ 142, // AllReduce PreMulSum u32 COLLNET_DIRECT SIMPLE
/* 730*/ -1,
/* 731*/ -1,
/* 732*/ 141, // AllReduce PreMulSum u32 COLLNET_CHAIN SIMPLE
/* 733*/ -1,
/* 734*/ -1,
/* 735*/ -1,
/* 736*/ -1,
/* 737*/ -1,
/* 738*/ -1,
/* 739*/ 154, // AllReduce PreMulSum i64 TREE LL
/* 740*/ 155, // AllReduce PreMulSum i64 TREE LL128
/* 741*/ 156, // AllReduce PreMulSum i64 TREE SIMPLE
/* 742*/ 151, // AllReduce PreMulSum i64 RING LL
/* 743*/ 152, // AllReduce PreMulSum i64 RING LL128
/* 744*/ 153, // AllReduce PreMulSum i64 RING SIMPLE
/* 745*/ -1,
/* 746*/ -1,
/* 747*/ 150, // AllReduce PreMulSum i64 COLLNET_DIRECT SIMPLE
/* 748*/ -1,
/* 749*/ -1,
/* 750*/ 149, // AllReduce PreMulSum i64 COLLNET_CHAIN SIMPLE
/* 751*/ -1,
/* 752*/ -1,
/* 753*/ -1,
/* 754*/ -1,
/* 755*/ -1,
/* 756*/ -1,
/* 757*/ 154, // AllReduce PreMulSum u64 TREE LL
/* 758*/ 155, // AllReduce PreMulSum u64 TREE LL128
/* 759*/ 156, // AllReduce PreMulSum u64 TREE SIMPLE
/* 760*/ 151, // AllReduce PreMulSum u64 RING LL
/* 761*/ 152, // AllReduce PreMulSum u64 RING LL128
/* 762*/ 153, // AllReduce PreMulSum u64 RING SIMPLE
/* 763*/ -1,
/* 764*/ -1,
/* 765*/ 150, // AllReduce PreMulSum u64 COLLNET_DIRECT SIMPLE
/* 766*/ -1,
/* 767*/ -1,
/* 768*/ 149, // AllReduce PreMulSum u64 COLLNET_CHAIN SIMPLE
/* 769*/ -1,
/* 770*/ -1,
/* 771*/ -1,
/* 772*/ -1,
/* 773*/ -1,
/* 774*/ -1,
/* 775*/ 106, // AllReduce PreMulSum f16 TREE LL
/* 776*/ 107, // AllReduce PreMulSum f16 TREE LL128
/* 777*/ 108, // AllReduce PreMulSum f16 TREE SIMPLE
/* 778*/ 103, // AllReduce PreMulSum f16 RING LL
/* 779*/ 104, // AllReduce PreMulSum f16 RING LL128
/* 780*/ 105, // AllReduce PreMulSum f16 RING SIMPLE
/* 781*/ -1,
/* 782*/ -1,
/* 783*/ 102, // AllReduce PreMulSum f16 COLLNET_DIRECT SIMPLE
/* 784*/ -1,
/* 785*/ -1,
/* 786*/ 101, // AllReduce PreMulSum f16 COLLNET_CHAIN SIMPLE
/* 787*/ -1,
/* 788*/ -1,
/* 789*/ -1,
/* 790*/ -1,
/* 791*/ -1,
/* 792*/ -1,
/* 793*/ 114, // AllReduce PreMulSum f32 TREE LL
/* 794*/ 115, // AllReduce PreMulSum f32 TREE LL128
/* 795*/ 116, // AllReduce PreMulSum f32 TREE SIMPLE
/* 796*/ 111, // AllReduce PreMulSum f32 RING LL
/* 797*/ 112, // AllReduce PreMulSum f32 RING LL128
/* 798*/ 113, // AllReduce PreMulSum f32 RING SIMPLE
/* 799*/ -1,
/* 800*/ -1,
/* 801*/ 110, // AllReduce PreMulSum f32 COLLNET_DIRECT SIMPLE
/* 802*/ -1,
/* 803*/ -1,
/* 804*/ 109, // AllReduce PreMulSum f32 COLLNET_CHAIN SIMPLE
/* 805*/ -1,
/* 806*/ -1,
/* 807*/ -1,
/* 808*/ -1,
/* 809*/ -1,
/* 810*/ -1,
/* 811*/ 122, // AllReduce PreMulSum f64 TREE LL
/* 812*/ 123, // AllReduce PreMulSum f64 TREE LL128
/* 813*/ 124, // AllReduce PreMulSum f64 TREE SIMPLE
/* 814*/ 119, // AllReduce PreMulSum f64 RING LL
/* 815*/ 120, // AllReduce PreMulSum f64 RING LL128
/* 816*/ 121, // AllReduce PreMulSum f64 RING SIMPLE
/* 817*/ -1,
/* 818*/ -1,
/* 819*/ 118, // AllReduce PreMulSum f64 COLLNET_DIRECT SIMPLE
/* 820*/ -1,
/* 821*/ -1,
/* 822*/ 117, // AllReduce PreMulSum f64 COLLNET_CHAIN SIMPLE
/* 823*/ -1,
/* 824*/ -1,
/* 825*/ -1,
/* 826*/ -1,
/* 827*/ -1,
/* 828*/ -1,
/* 829*/ 98, // AllReduce PreMulSum bf16 TREE LL
/* 830*/ 99, // AllReduce PreMulSum bf16 TREE LL128
/* 831*/ 100, // AllReduce PreMulSum bf16 TREE SIMPLE
/* 832*/ 95, // AllReduce PreMulSum bf16 RING LL
/* 833*/ 96, // AllReduce PreMulSum bf16 RING LL128
/* 834*/ 97, // AllReduce PreMulSum bf16 RING SIMPLE
/* 835*/ -1,
/* 836*/ -1,
/* 837*/ 94, // AllReduce PreMulSum bf16 COLLNET_DIRECT SIMPLE
/* 838*/ -1,
/* 839*/ -1,
/* 840*/ 93, // AllReduce PreMulSum bf16 COLLNET_CHAIN SIMPLE
/* 841*/ -1,
/* 842*/ -1,
/* 843*/ -1,
/* 844*/ -1,
/* 845*/ -1,
/* 846*/ -1,
/* 847*/ 130, // AllReduce PreMulSum f8e4m3 TREE LL
/* 848*/ 131, // AllReduce PreMulSum f8e4m3 TREE LL128
/* 849*/ 132, // AllReduce PreMulSum f8e4m3 TREE SIMPLE
/* 850*/ 127, // AllReduce PreMulSum f8e4m3 RING LL
/* 851*/ 128, // AllReduce PreMulSum f8e4m3 RING LL128
/* 852*/ 129, // AllReduce PreMulSum f8e4m3 RING SIMPLE
/* 853*/ -1,
/* 854*/ -1,
/* 855*/ 126, // AllReduce PreMulSum f8e4m3 COLLNET_DIRECT SIMPLE
/* 856*/ -1,
/* 857*/ -1,
/* 858*/ 125, // AllReduce PreMulSum f8e4m3 COLLNET_CHAIN SIMPLE
/* 859*/ -1,
/* 860*/ -1,
/* 861*/ -1,
/* 862*/ -1,
/* 863*/ -1,
/* 864*/ -1,
/* 865*/ 138, // AllReduce PreMulSum f8e5m2 TREE LL
/* 866*/ 139, // AllReduce PreMulSum f8e5m2 TREE LL128
/* 867*/ 140, // AllReduce PreMulSum f8e5m2 TREE SIMPLE
/* 868*/ 135, // AllReduce PreMulSum f8e5m2 RING LL
/* 869*/ 136, // AllReduce PreMulSum f8e5m2 RING LL128
/* 870*/ 137, // AllReduce PreMulSum f8e5m2 RING SIMPLE
/* 871*/ -1,
/* 872*/ -1,
/* 873*/ 134, // AllReduce PreMulSum f8e5m2 COLLNET_DIRECT SIMPLE
/* 874*/ -1,
/* 875*/ -1,
/* 876*/ 133, // AllReduce PreMulSum f8e5m2 COLLNET_CHAIN SIMPLE
/* 877*/ -1,
/* 878*/ -1,
/* 879*/ -1,
/* 880*/ -1,
/* 881*/ -1,
/* 882*/ -1,
/* 883*/ 342, // AllReduce SumPostDiv i8 TREE LL
/* 884*/ 343, // AllReduce SumPostDiv i8 TREE LL128
/* 885*/ 344, // AllReduce SumPostDiv i8 TREE SIMPLE
/* 886*/ 339, // AllReduce SumPostDiv i8 RING LL
/* 887*/ 340, // AllReduce SumPostDiv i8 RING LL128
/* 888*/ 341, // AllReduce SumPostDiv i8 RING SIMPLE
/* 889*/ -1,
/* 890*/ -1,
/* 891*/ 338, // AllReduce SumPostDiv i8 COLLNET_DIRECT SIMPLE
/* 892*/ -1,
/* 893*/ -1,
/* 894*/ 337, // AllReduce SumPostDiv i8 COLLNET_CHAIN SIMPLE
/* 895*/ -1,
/* 896*/ -1,
/* 897*/ -1,
/* 898*/ -1,
/* 899*/ -1,
/* 900*/ -1,
/* 901*/ 342, // AllReduce SumPostDiv u8 TREE LL
/* 902*/ 343, // AllReduce SumPostDiv u8 TREE LL128
/* 903*/ 344, // AllReduce SumPostDiv u8 TREE SIMPLE
/* 904*/ 339, // AllReduce SumPostDiv u8 RING LL
/* 905*/ 340, // AllReduce SumPostDiv u8 RING LL128
/* 906*/ 341, // AllReduce SumPostDiv u8 RING SIMPLE
/* 907*/ -1,
/* 908*/ -1,
/* 909*/ 338, // AllReduce SumPostDiv u8 COLLNET_DIRECT SIMPLE
/* 910*/ -1,
/* 911*/ -1,
/* 912*/ 337, // AllReduce SumPostDiv u8 COLLNET_CHAIN SIMPLE
/* 913*/ -1,
/* 914*/ -1,
/* 915*/ -1,
/* 916*/ -1,
/* 917*/ -1,
/* 918*/ -1,
/* 919*/ 326, // AllReduce SumPostDiv i32 TREE LL
/* 920*/ 327, // AllReduce SumPostDiv i32 TREE LL128
/* 921*/ 328, // AllReduce SumPostDiv i32 TREE SIMPLE
/* 922*/ 323, // AllReduce SumPostDiv i32 RING LL
/* 923*/ 324, // AllReduce SumPostDiv i32 RING LL128
/* 924*/ 325, // AllReduce SumPostDiv i32 RING SIMPLE
/* 925*/ -1,
/* 926*/ -1,
/* 927*/ 322, // AllReduce SumPostDiv i32 COLLNET_DIRECT SIMPLE
/* 928*/ -1,
/* 929*/ -1,
/* 930*/ 321, // AllReduce SumPostDiv i32 COLLNET_CHAIN SIMPLE
/* 931*/ -1,
/* 932*/ -1,
/* 933*/ -1,
/* 934*/ -1,
/* 935*/ -1,
/* 936*/ -1,
/* 937*/ 326, // AllReduce SumPostDiv u32 TREE LL
/* 938*/ 327, // AllReduce SumPostDiv u32 TREE LL128
/* 939*/ 328, // AllReduce SumPostDiv u32 TREE SIMPLE
/* 940*/ 323, // AllReduce SumPostDiv u32 RING LL
/* 941*/ 324, // AllReduce SumPostDiv u32 RING LL128
/* 942*/ 325, // AllReduce SumPostDiv u32 RING SIMPLE
/* 943*/ -1,
/* 944*/ -1,
/* 945*/ 322, // AllReduce SumPostDiv u32 COLLNET_DIRECT SIMPLE
/* 946*/ -1,
/* 947*/ -1,
/* 948*/ 321, // AllReduce SumPostDiv u32 COLLNET_CHAIN SIMPLE
/* 949*/ -1,
/* 950*/ -1,
/* 951*/ -1,
/* 952*/ -1,
/* 953*/ -1,
/* 954*/ -1,
/* 955*/ 334, // AllReduce SumPostDiv i64 TREE LL
/* 956*/ 335, // AllReduce SumPostDiv i64 TREE LL128
/* 957*/ 336, // AllReduce SumPostDiv i64 TREE SIMPLE
/* 958*/ 331, // AllReduce SumPostDiv i64 RING LL
/* 959*/ 332, // AllReduce SumPostDiv i64 RING LL128
/* 960*/ 333, // AllReduce SumPostDiv i64 RING SIMPLE
/* 961*/ -1,
/* 962*/ -1,
/* 963*/ 330, // AllReduce SumPostDiv i64 COLLNET_DIRECT SIMPLE
/* 964*/ -1,
/* 965*/ -1,
/* 966*/ 329, // AllReduce SumPostDiv i64 COLLNET_CHAIN SIMPLE
/* 967*/ -1,
/* 968*/ -1,
/* 969*/ -1,
/* 970*/ -1,
/* 971*/ -1,
/* 972*/ -1,
/* 973*/ 334, // AllReduce SumPostDiv u64 TREE LL
/* 974*/ 335, // AllReduce SumPostDiv u64 TREE LL128
/* 975*/ 336, // AllReduce SumPostDiv u64 TREE SIMPLE
/* 976*/ 331, // AllReduce SumPostDiv u64 RING LL
/* 977*/ 332, // AllReduce SumPostDiv u64 RING LL128
/* 978*/ 333, // AllReduce SumPostDiv u64 RING SIMPLE
/* 979*/ -1,
/* 980*/ -1,
/* 981*/ 330, // AllReduce SumPostDiv u64 COLLNET_DIRECT SIMPLE
/* 982*/ -1,
/* 983*/ -1,
/* 984*/ 329, // AllReduce SumPostDiv u64 COLLNET_CHAIN SIMPLE
/* 985*/ -1,
/* 986*/ -1,
/* 987*/ -1,
/* 988*/ -1,
/* 989*/ -1,
/* 990*/ -1,
/* 991*/ -1,
/* 992*/ -1,
/* 993*/ -1,
/* 994*/ -1,
/* 995*/ -1,
/* 996*/ -1,
/* 997*/ -1,
/* 998*/ -1,
/* 999*/ -1,
/*1000*/ -1,
/*1001*/ -1,
/*1002*/ -1,
/*1003*/ -1,
/*1004*/ -1,
/*1005*/ -1,
/*1006*/ -1,
/*1007*/ -1,
/*1008*/ -1,
/*1009*/ -1,
/*1010*/ -1,
/*1011*/ -1,
/*1012*/ -1,
/*1013*/ -1,
/*1014*/ -1,
/*1015*/ -1,
/*1016*/ -1,
/*1017*/ -1,
/*1018*/ -1,
/*1019*/ -1,
/*1020*/ -1,
/*1021*/ -1,
/*1022*/ -1,
/*1023*/ -1,
/*1024*/ -1,
/*1025*/ -1,
/*1026*/ -1,
/*1027*/ -1,
/*1028*/ -1,
/*1029*/ -1,
/*1030*/ -1,
/*1031*/ -1,
/*1032*/ -1,
/*1033*/ -1,
/*1034*/ -1,
/*1035*/ -1,
/*1036*/ -1,
/*1037*/ -1,
/*1038*/ -1,
/*1039*/ -1,
/*1040*/ -1,
/*1041*/ -1,
/*1042*/ -1,
/*1043*/ -1,
/*1044*/ -1,
/*1045*/ -1,
/*1046*/ -1,
/*1047*/ -1,
/*1048*/ -1,
/*1049*/ -1,
/*1050*/ -1,
/*1051*/ -1,
/*1052*/ -1,
/*1053*/ -1,
/*1054*/ -1,
/*1055*/ -1,
/*1056*/ -1,
/*1057*/ -1,
/*1058*/ -1,
/*1059*/ -1,
/*1060*/ -1,
/*1061*/ -1,
/*1062*/ -1,
/*1063*/ -1,
/*1064*/ -1,
/*1065*/ -1,
/*1066*/ -1,
/*1067*/ -1,
/*1068*/ -1,
/*1069*/ -1,
/*1070*/ -1,
/*1071*/ -1,
/*1072*/ -1,
/*1073*/ -1,
/*1074*/ -1,
/*1075*/ -1,
/*1076*/ -1,
/*1077*/ -1,
/*1078*/ -1,
/*1079*/ -1,
/*1080*/ -1,
/*1081*/ -1,
/*1082*/ -1,
/*1083*/ -1,
/*1084*/ -1,
/*1085*/ -1,
/*1086*/ -1,
/*1087*/ -1,
/*1088*/ -1,
/*1089*/ -1,
/*1090*/ -1,
/*1091*/ -1,
/*1092*/ -1,
/*1093*/ -1,
/*1094*/ -1,
/*1095*/ -1,
/*1096*/ -1,
/*1097*/ -1,
/*1098*/ -1,
/*1099*/ 453, // Reduce Sum i8 RING LL
/*1100*/ 454, // Reduce Sum i8 RING LL128
/*1101*/ 455, // Reduce Sum i8 RING SIMPLE
/*1102*/ 453, // Reduce Sum u8 RING LL
/*1103*/ 454, // Reduce Sum u8 RING LL128
/*1104*/ 455, // Reduce Sum u8 RING SIMPLE
/*1105*/ 447, // Reduce Sum i32 RING LL
/*1106*/ 448, // Reduce Sum i32 RING LL128
/*1107*/ 449, // Reduce Sum i32 RING SIMPLE
/*1108*/ 447, // Reduce Sum u32 RING LL
/*1109*/ 448, // Reduce Sum u32 RING LL128
/*1110*/ 449, // Reduce Sum u32 RING SIMPLE
/*1111*/ 450, // Reduce Sum i64 RING LL
/*1112*/ 451, // Reduce Sum i64 RING LL128
/*1113*/ 452, // Reduce Sum i64 RING SIMPLE
/*1114*/ 450, // Reduce Sum u64 RING LL
/*1115*/ 451, // Reduce Sum u64 RING LL128
/*1116*/ 452, // Reduce Sum u64 RING SIMPLE
/*1117*/ 432, // Reduce Sum f16 RING LL
/*1118*/ 433, // Reduce Sum f16 RING LL128
/*1119*/ 434, // Reduce Sum f16 RING SIMPLE
/*1120*/ 435, // Reduce Sum f32 RING LL
/*1121*/ 436, // Reduce Sum f32 RING LL128
/*1122*/ 437, // Reduce Sum f32 RING SIMPLE
/*1123*/ 438, // Reduce Sum f64 RING LL
/*1124*/ 439, // Reduce Sum f64 RING LL128
/*1125*/ 440, // Reduce Sum f64 RING SIMPLE
/*1126*/ 429, // Reduce Sum bf16 RING LL
/*1127*/ 430, // Reduce Sum bf16 RING LL128
/*1128*/ 431, // Reduce Sum bf16 RING SIMPLE
/*1129*/ 441, // Reduce Sum f8e4m3 RING LL
/*1130*/ 442, // Reduce Sum f8e4m3 RING LL128
/*1131*/ 443, // Reduce Sum f8e4m3 RING SIMPLE
/*1132*/ 444, // Reduce Sum f8e5m2 RING LL
/*1133*/ 445, // Reduce Sum f8e5m2 RING LL128
/*1134*/ 446, // Reduce Sum f8e5m2 RING SIMPLE
/*1135*/ 426, // Reduce Prod i8 RING LL
/*1136*/ 427, // Reduce Prod i8 RING LL128
/*1137*/ 428, // Reduce Prod i8 RING SIMPLE
/*1138*/ 426, // Reduce Prod u8 RING LL
/*1139*/ 427, // Reduce Prod u8 RING LL128
/*1140*/ 428, // Reduce Prod u8 RING SIMPLE
/*1141*/ 420, // Reduce Prod i32 RING LL
/*1142*/ 421, // Reduce Prod i32 RING LL128
/*1143*/ 422, // Reduce Prod i32 RING SIMPLE
/*1144*/ 420, // Reduce Prod u32 RING LL
/*1145*/ 421, // Reduce Prod u32 RING LL128
/*1146*/ 422, // Reduce Prod u32 RING SIMPLE
/*1147*/ 423, // Reduce Prod i64 RING LL
/*1148*/ 424, // Reduce Prod i64 RING LL128
/*1149*/ 425, // Reduce Prod i64 RING SIMPLE
/*1150*/ 423, // Reduce Prod u64 RING LL
/*1151*/ 424, // Reduce Prod u64 RING LL128
/*1152*/ 425, // Reduce Prod u64 RING SIMPLE
/*1153*/ 405, // Reduce Prod f16 RING LL
/*1154*/ 406, // Reduce Prod f16 RING LL128
/*1155*/ 407, // Reduce Prod f16 RING SIMPLE
/*1156*/ 408, // Reduce Prod f32 RING LL
/*1157*/ 409, // Reduce Prod f32 RING LL128
/*1158*/ 410, // Reduce Prod f32 RING SIMPLE
/*1159*/ 411, // Reduce Prod f64 RING LL
/*1160*/ 412, // Reduce Prod f64 RING LL128
/*1161*/ 413, // Reduce Prod f64 RING SIMPLE
/*1162*/ 402, // Reduce Prod bf16 RING LL
/*1163*/ 403, // Reduce Prod bf16 RING LL128
/*1164*/ 404, // Reduce Prod bf16 RING SIMPLE
/*1165*/ 414, // Reduce Prod f8e4m3 RING LL
/*1166*/ 415, // Reduce Prod f8e4m3 RING LL128
/*1167*/ 416, // Reduce Prod f8e4m3 RING SIMPLE
/*1168*/ 417, // Reduce Prod f8e5m2 RING LL
/*1169*/ 418, // Reduce Prod f8e5m2 RING LL128
/*1170*/ 419, // Reduce Prod f8e5m2 RING SIMPLE
/*1171*/ 372, // Reduce MinMax i8 RING LL
/*1172*/ 373, // Reduce MinMax i8 RING LL128
/*1173*/ 374, // Reduce MinMax i8 RING SIMPLE
/*1174*/ 372, // Reduce MinMax u8 RING LL
/*1175*/ 373, // Reduce MinMax u8 RING LL128
/*1176*/ 374, // Reduce MinMax u8 RING SIMPLE
/*1177*/ 366, // Reduce MinMax i32 RING LL
/*1178*/ 367, // Reduce MinMax i32 RING LL128
/*1179*/ 368, // Reduce MinMax i32 RING SIMPLE
/*1180*/ 366, // Reduce MinMax u32 RING LL
/*1181*/ 367, // Reduce MinMax u32 RING LL128
/*1182*/ 368, // Reduce MinMax u32 RING SIMPLE
/*1183*/ 369, // Reduce MinMax i64 RING LL
/*1184*/ 370, // Reduce MinMax i64 RING LL128
/*1185*/ 371, // Reduce MinMax i64 RING SIMPLE
/*1186*/ 369, // Reduce MinMax u64 RING LL
/*1187*/ 370, // Reduce MinMax u64 RING LL128
/*1188*/ 371, // Reduce MinMax u64 RING SIMPLE
/*1189*/ 351, // Reduce MinMax f16 RING LL
/*1190*/ 352, // Reduce MinMax f16 RING LL128
/*1191*/ 353, // Reduce MinMax f16 RING SIMPLE
/*1192*/ 354, // Reduce MinMax f32 RING LL
/*1193*/ 355, // Reduce MinMax f32 RING LL128
/*1194*/ 356, // Reduce MinMax f32 RING SIMPLE
/*1195*/ 357, // Reduce MinMax f64 RING LL
/*1196*/ 358, // Reduce MinMax f64 RING LL128
/*1197*/ 359, // Reduce MinMax f64 RING SIMPLE
/*1198*/ 348, // Reduce MinMax bf16 RING LL
/*1199*/ 349, // Reduce MinMax bf16 RING LL128
/*1200*/ 350, // Reduce MinMax bf16 RING SIMPLE
/*1201*/ 360, // Reduce MinMax f8e4m3 RING LL
/*1202*/ 361, // Reduce MinMax f8e4m3 RING LL128
/*1203*/ 362, // Reduce MinMax f8e4m3 RING SIMPLE
/*1204*/ 363, // Reduce MinMax f8e5m2 RING LL
/*1205*/ 364, // Reduce MinMax f8e5m2 RING LL128
/*1206*/ 365, // Reduce MinMax f8e5m2 RING SIMPLE
/*1207*/ 399, // Reduce PreMulSum i8 RING LL
/*1208*/ 400, // Reduce PreMulSum i8 RING LL128
/*1209*/ 401, // Reduce PreMulSum i8 RING SIMPLE
/*1210*/ 399, // Reduce PreMulSum u8 RING LL
/*1211*/ 400, // Reduce PreMulSum u8 RING LL128
/*1212*/ 401, // Reduce PreMulSum u8 RING SIMPLE
/*1213*/ 393, // Reduce PreMulSum i32 RING LL
/*1214*/ 394, // Reduce PreMulSum i32 RING LL128
/*1215*/ 395, // Reduce PreMulSum i32 RING SIMPLE
/*1216*/ 393, // Reduce PreMulSum u32 RING LL
/*1217*/ 394, // Reduce PreMulSum u32 RING LL128
/*1218*/ 395, // Reduce PreMulSum u32 RING SIMPLE
/*1219*/ 396, // Reduce PreMulSum i64 RING LL
/*1220*/ 397, // Reduce PreMulSum i64 RING LL128
/*1221*/ 398, // Reduce PreMulSum i64 RING SIMPLE
/*1222*/ 396, // Reduce PreMulSum u64 RING LL
/*1223*/ 397, // Reduce PreMulSum u64 RING LL128
/*1224*/ 398, // Reduce PreMulSum u64 RING SIMPLE
/*1225*/ 378, // Reduce PreMulSum f16 RING LL
/*1226*/ 379, // Reduce PreMulSum f16 RING LL128
/*1227*/ 380, // Reduce PreMulSum f16 RING SIMPLE
/*1228*/ 381, // Reduce PreMulSum f32 RING LL
/*1229*/ 382, // Reduce PreMulSum f32 RING LL128
/*1230*/ 383, // Reduce PreMulSum f32 RING SIMPLE
/*1231*/ 384, // Reduce PreMulSum f64 RING LL
/*1232*/ 385, // Reduce PreMulSum f64 RING LL128
/*1233*/ 386, // Reduce PreMulSum f64 RING SIMPLE
/*1234*/ 375, // Reduce PreMulSum bf16 RING LL
/*1235*/ 376, // Reduce PreMulSum bf16 RING LL128
/*1236*/ 377, // Reduce PreMulSum bf16 RING SIMPLE
/*1237*/ 387, // Reduce PreMulSum f8e4m3 RING LL
/*1238*/ 388, // Reduce PreMulSum f8e4m3 RING LL128
/*1239*/ 389, // Reduce PreMulSum f8e4m3 RING SIMPLE
/*1240*/ 390, // Reduce PreMulSum f8e5m2 RING LL
/*1241*/ 391, // Reduce PreMulSum f8e5m2 RING LL128
/*1242*/ 392, // Reduce PreMulSum f8e5m2 RING SIMPLE
/*1243*/ 462, // Reduce SumPostDiv i8 RING LL
/*1244*/ 463, // Reduce SumPostDiv i8 RING LL128
/*1245*/ 464, // Reduce SumPostDiv i8 RING SIMPLE
/*1246*/ 462, // Reduce SumPostDiv u8 RING LL
/*1247*/ 463, // Reduce SumPostDiv u8 RING LL128
/*1248*/ 464, // Reduce SumPostDiv u8 RING SIMPLE
/*1249*/ 456, // Reduce SumPostDiv i32 RING LL
/*1250*/ 457, // Reduce SumPostDiv i32 RING LL128
/*1251*/ 458, // Reduce SumPostDiv i32 RING SIMPLE
/*1252*/ 456, // Reduce SumPostDiv u32 RING LL
/*1253*/ 457, // Reduce SumPostDiv u32 RING LL128
/*1254*/ 458, // Reduce SumPostDiv u32 RING SIMPLE
/*1255*/ 459, // Reduce SumPostDiv i64 RING LL
/*1256*/ 460, // Reduce SumPostDiv i64 RING LL128
/*1257*/ 461, // Reduce SumPostDiv i64 RING SIMPLE
/*1258*/ 459, // Reduce SumPostDiv u64 RING LL
/*1259*/ 460, // Reduce SumPostDiv u64 RING LL128
/*1260*/ 461, // Reduce SumPostDiv u64 RING SIMPLE
/*1261*/ -1,
/*1262*/ -1,
/*1263*/ -1,
/*1264*/ -1,
/*1265*/ -1,
/*1266*/ -1,
/*1267*/ -1,
/*1268*/ -1,
/*1269*/ -1,
/*1270*/ -1,
/*1271*/ -1,
/*1272*/ -1,
/*1273*/ -1,
/*1274*/ -1,
/*1275*/ -1,
/*1276*/ -1,
/*1277*/ -1,
/*1278*/ -1,
/*1279*/ 654, // ReduceScatter Sum i8 RING LL
/*1280*/ 655, // ReduceScatter Sum i8 RING LL128
/*1281*/ 656, // ReduceScatter Sum i8 RING SIMPLE
/*1282*/ -1,
/*1283*/ -1,
/*1284*/ 652, // ReduceScatter Sum i8 COLLNET_DIRECT SIMPLE
/*1285*/ -1,
/*1286*/ -1,
/*1287*/ -1,
/*1288*/ -1,
/*1289*/ -1,
/*1290*/ 653, // ReduceScatter Sum i8 PAT SIMPLE
/*1291*/ 654, // ReduceScatter Sum u8 RING LL
/*1292*/ 655, // ReduceScatter Sum u8 RING LL128
/*1293*/ 656, // ReduceScatter Sum u8 RING SIMPLE
/*1294*/ -1,
/*1295*/ -1,
/*1296*/ 652, // ReduceScatter Sum u8 COLLNET_DIRECT SIMPLE
/*1297*/ -1,
/*1298*/ -1,
/*1299*/ -1,
/*1300*/ -1,
/*1301*/ -1,
/*1302*/ 653, // ReduceScatter Sum u8 PAT SIMPLE
/*1303*/ 643, // ReduceScatter Sum i32 RING LL
/*1304*/ 644, // ReduceScatter Sum i32 RING LL128
/*1305*/ 645, // ReduceScatter Sum i32 RING SIMPLE
/*1306*/ -1,
/*1307*/ -1,
/*1308*/ 640, // ReduceScatter Sum i32 COLLNET_DIRECT SIMPLE
/*1309*/ -1,
/*1310*/ -1,
/*1311*/ 641, // ReduceScatter Sum i32 NVLS SIMPLE
/*1312*/ -1,
/*1313*/ -1,
/*1314*/ 642, // ReduceScatter Sum i32 PAT SIMPLE
/*1315*/ 643, // ReduceScatter Sum u32 RING LL
/*1316*/ 644, // ReduceScatter Sum u32 RING LL128
/*1317*/ 645, // ReduceScatter Sum u32 RING SIMPLE
/*1318*/ -1,
/*1319*/ -1,
/*1320*/ 640, // ReduceScatter Sum u32 COLLNET_DIRECT SIMPLE
/*1321*/ -1,
/*1322*/ -1,
/*1323*/ 641, // ReduceScatter Sum u32 NVLS SIMPLE
/*1324*/ -1,
/*1325*/ -1,
/*1326*/ 642, // ReduceScatter Sum u32 PAT SIMPLE
/*1327*/ 649, // ReduceScatter Sum i64 RING LL
/*1328*/ 650, // ReduceScatter Sum i64 RING LL128
/*1329*/ 651, // ReduceScatter Sum i64 RING SIMPLE
/*1330*/ -1,
/*1331*/ -1,
/*1332*/ 646, // ReduceScatter Sum i64 COLLNET_DIRECT SIMPLE
/*1333*/ -1,
/*1334*/ -1,
/*1335*/ 647, // ReduceScatter Sum i64 NVLS SIMPLE
/*1336*/ -1,
/*1337*/ -1,
/*1338*/ 648, // ReduceScatter Sum i64 PAT SIMPLE
/*1339*/ 649, // ReduceScatter Sum u64 RING LL
/*1340*/ 650, // ReduceScatter Sum u64 RING LL128
/*1341*/ 651, // ReduceScatter Sum u64 RING SIMPLE
/*1342*/ -1,
/*1343*/ -1,
/*1344*/ 646, // ReduceScatter Sum u64 COLLNET_DIRECT SIMPLE
/*1345*/ -1,
/*1346*/ -1,
/*1347*/ 647, // ReduceScatter Sum u64 NVLS SIMPLE
/*1348*/ -1,
/*1349*/ -1,
/*1350*/ 648, // ReduceScatter Sum u64 PAT SIMPLE
/*1351*/ 615, // ReduceScatter Sum f16 RING LL
/*1352*/ 616, // ReduceScatter Sum f16 RING LL128
/*1353*/ 617, // ReduceScatter Sum f16 RING SIMPLE
/*1354*/ -1,
/*1355*/ -1,
/*1356*/ 612, // ReduceScatter Sum f16 COLLNET_DIRECT SIMPLE
/*1357*/ -1,
/*1358*/ -1,
/*1359*/ 613, // ReduceScatter Sum f16 NVLS SIMPLE
/*1360*/ -1,
/*1361*/ -1,
/*1362*/ 614, // ReduceScatter Sum f16 PAT SIMPLE
/*1363*/ 621, // ReduceScatter Sum f32 RING LL
/*1364*/ 622, // ReduceScatter Sum f32 RING LL128
/*1365*/ 623, // ReduceScatter Sum f32 RING SIMPLE
/*1366*/ -1,
/*1367*/ -1,
/*1368*/ 618, // ReduceScatter Sum f32 COLLNET_DIRECT SIMPLE
/*1369*/ -1,
/*1370*/ -1,
/*1371*/ 619, // ReduceScatter Sum f32 NVLS SIMPLE
/*1372*/ -1,
/*1373*/ -1,
/*1374*/ 620, // ReduceScatter Sum f32 PAT SIMPLE
/*1375*/ 627, // ReduceScatter Sum f64 RING LL
/*1376*/ 628, // ReduceScatter Sum f64 RING LL128
/*1377*/ 629, // ReduceScatter Sum f64 RING SIMPLE
/*1378*/ -1,
/*1379*/ -1,
/*1380*/ 624, // ReduceScatter Sum f64 COLLNET_DIRECT SIMPLE
/*1381*/ -1,
/*1382*/ -1,
/*1383*/ 625, // ReduceScatter Sum f64 NVLS SIMPLE
/*1384*/ -1,
/*1385*/ -1,
/*1386*/ 626, // ReduceScatter Sum f64 PAT SIMPLE
/*1387*/ 609, // ReduceScatter Sum bf16 RING LL
/*1388*/ 610, // ReduceScatter Sum bf16 RING LL128
/*1389*/ 611, // ReduceScatter Sum bf16 RING SIMPLE
/*1390*/ -1,
/*1391*/ -1,
/*1392*/ 606, // ReduceScatter Sum bf16 COLLNET_DIRECT SIMPLE
/*1393*/ -1,
/*1394*/ -1,
/*1395*/ 607, // ReduceScatter Sum bf16 NVLS SIMPLE
/*1396*/ -1,
/*1397*/ -1,
/*1398*/ 608, // ReduceScatter Sum bf16 PAT SIMPLE
/*1399*/ 632, // ReduceScatter Sum f8e4m3 RING LL
/*1400*/ 633, // ReduceScatter Sum f8e4m3 RING LL128
/*1401*/ 634, // ReduceScatter Sum f8e4m3 RING SIMPLE
/*1402*/ -1,
/*1403*/ -1,
/*1404*/ 630, // ReduceScatter Sum f8e4m3 COLLNET_DIRECT SIMPLE
/*1405*/ -1,
/*1406*/ -1,
/*1407*/ -1,
/*1408*/ -1,
/*1409*/ -1,
/*1410*/ 631, // ReduceScatter Sum f8e4m3 PAT SIMPLE
/*1411*/ 637, // ReduceScatter Sum f8e5m2 RING LL
/*1412*/ 638, // ReduceScatter Sum f8e5m2 RING LL128
/*1413*/ 639, // ReduceScatter Sum f8e5m2 RING SIMPLE
/*1414*/ -1,
/*1415*/ -1,
/*1416*/ 635, // ReduceScatter Sum f8e5m2 COLLNET_DIRECT SIMPLE
/*1417*/ -1,
/*1418*/ -1,
/*1419*/ -1,
/*1420*/ -1,
/*1421*/ -1,
/*1422*/ 636, // ReduceScatter Sum f8e5m2 PAT SIMPLE
/*1423*/ 603, // ReduceScatter Prod i8 RING LL
/*1424*/ 604, // ReduceScatter Prod i8 RING LL128
/*1425*/ 605, // ReduceScatter Prod i8 RING SIMPLE
/*1426*/ -1,
/*1427*/ -1,
/*1428*/ 601, // ReduceScatter Prod i8 COLLNET_DIRECT SIMPLE
/*1429*/ -1,
/*1430*/ -1,
/*1431*/ -1,
/*1432*/ -1,
/*1433*/ -1,
/*1434*/ 602, // ReduceScatter Prod i8 PAT SIMPLE
/*1435*/ 603, // ReduceScatter Prod u8 RING LL
/*1436*/ 604, // ReduceScatter Prod u8 RING LL128
/*1437*/ 605, // ReduceScatter Prod u8 RING SIMPLE
/*1438*/ -1,
/*1439*/ -1,
/*1440*/ 601, // ReduceScatter Prod u8 COLLNET_DIRECT SIMPLE
/*1441*/ -1,
/*1442*/ -1,
/*1443*/ -1,
/*1444*/ -1,
/*1445*/ -1,
/*1446*/ 602, // ReduceScatter Prod u8 PAT SIMPLE
/*1447*/ 593, // ReduceScatter Prod i32 RING LL
/*1448*/ 594, // ReduceScatter Prod i32 RING LL128
/*1449*/ 595, // ReduceScatter Prod i32 RING SIMPLE
/*1450*/ -1,
/*1451*/ -1,
/*1452*/ 591, // ReduceScatter Prod i32 COLLNET_DIRECT SIMPLE
/*1453*/ -1,
/*1454*/ -1,
/*1455*/ -1,
/*1456*/ -1,
/*1457*/ -1,
/*1458*/ 592, // ReduceScatter Prod i32 PAT SIMPLE
/*1459*/ 593, // ReduceScatter Prod u32 RING LL
/*1460*/ 594, // ReduceScatter Prod u32 RING LL128
/*1461*/ 595, // ReduceScatter Prod u32 RING SIMPLE
/*1462*/ -1,
/*1463*/ -1,
/*1464*/ 591, // ReduceScatter Prod u32 COLLNET_DIRECT SIMPLE
/*1465*/ -1,
/*1466*/ -1,
/*1467*/ -1,
/*1468*/ -1,
/*1469*/ -1,
/*1470*/ 592, // ReduceScatter Prod u32 PAT SIMPLE
/*1471*/ 598, // ReduceScatter Prod i64 RING LL
/*1472*/ 599, // ReduceScatter Prod i64 RING LL128
/*1473*/ 600, // ReduceScatter Prod i64 RING SIMPLE
/*1474*/ -1,
/*1475*/ -1,
/*1476*/ 596, // ReduceScatter Prod i64 COLLNET_DIRECT SIMPLE
/*1477*/ -1,
/*1478*/ -1,
/*1479*/ -1,
/*1480*/ -1,
/*1481*/ -1,
/*1482*/ 597, // ReduceScatter Prod i64 PAT SIMPLE
/*1483*/ 598, // ReduceScatter Prod u64 RING LL
/*1484*/ 599, // ReduceScatter Prod u64 RING LL128
/*1485*/ 600, // ReduceScatter Prod u64 RING SIMPLE
/*1486*/ -1,
/*1487*/ -1,
/*1488*/ 596, // ReduceScatter Prod u64 COLLNET_DIRECT SIMPLE
/*1489*/ -1,
/*1490*/ -1,
/*1491*/ -1,
/*1492*/ -1,
/*1493*/ -1,
/*1494*/ 597, // ReduceScatter Prod u64 PAT SIMPLE
/*1495*/ 568, // ReduceScatter Prod f16 RING LL
/*1496*/ 569, // ReduceScatter Prod f16 RING LL128
/*1497*/ 570, // ReduceScatter Prod f16 RING SIMPLE
/*1498*/ -1,
/*1499*/ -1,
/*1500*/ 566, // ReduceScatter Prod f16 COLLNET_DIRECT SIMPLE
/*1501*/ -1,
/*1502*/ -1,
/*1503*/ -1,
/*1504*/ -1,
/*1505*/ -1,
/*1506*/ 567, // ReduceScatter Prod f16 PAT SIMPLE
/*1507*/ 573, // ReduceScatter Prod f32 RING LL
/*1508*/ 574, // ReduceScatter Prod f32 RING LL128
/*1509*/ 575, // ReduceScatter Prod f32 RING SIMPLE
/*1510*/ -1,
/*1511*/ -1,
/*1512*/ 571, // ReduceScatter Prod f32 COLLNET_DIRECT SIMPLE
/*1513*/ -1,
/*1514*/ -1,
/*1515*/ -1,
/*1516*/ -1,
/*1517*/ -1,
/*1518*/ 572, // ReduceScatter Prod f32 PAT SIMPLE
/*1519*/ 578, // ReduceScatter Prod f64 RING LL
/*1520*/ 579, // ReduceScatter Prod f64 RING LL128
/*1521*/ 580, // ReduceScatter Prod f64 RING SIMPLE
/*1522*/ -1,
/*1523*/ -1,
/*1524*/ 576, // ReduceScatter Prod f64 COLLNET_DIRECT SIMPLE
/*1525*/ -1,
/*1526*/ -1,
/*1527*/ -1,
/*1528*/ -1,
/*1529*/ -1,
/*1530*/ 577, // ReduceScatter Prod f64 PAT SIMPLE
/*1531*/ 563, // ReduceScatter Prod bf16 RING LL
/*1532*/ 564, // ReduceScatter Prod bf16 RING LL128
/*1533*/ 565, // ReduceScatter Prod bf16 RING SIMPLE
/*1534*/ -1,
/*1535*/ -1,
/*1536*/ 561, // ReduceScatter Prod bf16 COLLNET_DIRECT SIMPLE
/*1537*/ -1,
/*1538*/ -1,
/*1539*/ -1,
/*1540*/ -1,
/*1541*/ -1,
/*1542*/ 562, // ReduceScatter Prod bf16 PAT SIMPLE
/*1543*/ 583, // ReduceScatter Prod f8e4m3 RING LL
/*1544*/ 584, // ReduceScatter Prod f8e4m3 RING LL128
/*1545*/ 585, // ReduceScatter Prod f8e4m3 RING SIMPLE
/*1546*/ -1,
/*1547*/ -1,
/*1548*/ 581, // ReduceScatter Prod f8e4m3 COLLNET_DIRECT SIMPLE
/*1549*/ -1,
/*1550*/ -1,
/*1551*/ -1,
/*1552*/ -1,
/*1553*/ -1,
/*1554*/ 582, // ReduceScatter Prod f8e4m3 PAT SIMPLE
/*1555*/ 588, // ReduceScatter Prod f8e5m2 RING LL
/*1556*/ 589, // ReduceScatter Prod f8e5m2 RING LL128
/*1557*/ 590, // ReduceScatter Prod f8e5m2 RING SIMPLE
/*1558*/ -1,
/*1559*/ -1,
/*1560*/ 586, // ReduceScatter Prod f8e5m2 COLLNET_DIRECT SIMPLE
/*1561*/ -1,
/*1562*/ -1,
/*1563*/ -1,
/*1564*/ -1,
/*1565*/ -1,
/*1566*/ 587, // ReduceScatter Prod f8e5m2 PAT SIMPLE
/*1567*/ 513, // ReduceScatter MinMax i8 RING LL
/*1568*/ 514, // ReduceScatter MinMax i8 RING LL128
/*1569*/ 515, // ReduceScatter MinMax i8 RING SIMPLE
/*1570*/ -1,
/*1571*/ -1,
/*1572*/ 511, // ReduceScatter MinMax i8 COLLNET_DIRECT SIMPLE
/*1573*/ -1,
/*1574*/ -1,
/*1575*/ -1,
/*1576*/ -1,
/*1577*/ -1,
/*1578*/ 512, // ReduceScatter MinMax i8 PAT SIMPLE
/*1579*/ 513, // ReduceScatter MinMax u8 RING LL
/*1580*/ 514, // ReduceScatter MinMax u8 RING LL128
/*1581*/ 515, // ReduceScatter MinMax u8 RING SIMPLE
/*1582*/ -1,
/*1583*/ -1,
/*1584*/ 511, // ReduceScatter MinMax u8 COLLNET_DIRECT SIMPLE
/*1585*/ -1,
/*1586*/ -1,
/*1587*/ -1,
/*1588*/ -1,
/*1589*/ -1,
/*1590*/ 512, // ReduceScatter MinMax u8 PAT SIMPLE
/*1591*/ 502, // ReduceScatter MinMax i32 RING LL
/*1592*/ 503, // ReduceScatter MinMax i32 RING LL128
/*1593*/ 504, // ReduceScatter MinMax i32 RING SIMPLE
/*1594*/ -1,
/*1595*/ -1,
/*1596*/ 499, // ReduceScatter MinMax i32 COLLNET_DIRECT SIMPLE
/*1597*/ -1,
/*1598*/ -1,
/*1599*/ 497, // ReduceScatter MinMax i32 NVLS SIMPLE
/*1600*/ -1,
/*1601*/ -1,
/*1602*/ 501, // ReduceScatter MinMax i32 PAT SIMPLE
/*1603*/ 502, // ReduceScatter MinMax u32 RING LL
/*1604*/ 503, // ReduceScatter MinMax u32 RING LL128
/*1605*/ 504, // ReduceScatter MinMax u32 RING SIMPLE
/*1606*/ -1,
/*1607*/ -1,
/*1608*/ 499, // ReduceScatter MinMax u32 COLLNET_DIRECT SIMPLE
/*1609*/ -1,
/*1610*/ -1,
/*1611*/ 500, // ReduceScatter MinMax u32 NVLS SIMPLE
/*1612*/ -1,
/*1613*/ -1,
/*1614*/ 501, // ReduceScatter MinMax u32 PAT SIMPLE
/*1615*/ 508, // ReduceScatter MinMax i64 RING LL
/*1616*/ 509, // ReduceScatter MinMax i64 RING LL128
/*1617*/ 510, // ReduceScatter MinMax i64 RING SIMPLE
/*1618*/ -1,
/*1619*/ -1,
/*1620*/ 505, // ReduceScatter MinMax i64 COLLNET_DIRECT SIMPLE
/*1621*/ -1,
/*1622*/ -1,
/*1623*/ 498, // ReduceScatter MinMax i64 NVLS SIMPLE
/*1624*/ -1,
/*1625*/ -1,
/*1626*/ 507, // ReduceScatter MinMax i64 PAT SIMPLE
/*1627*/ 508, // ReduceScatter MinMax u64 RING LL
/*1628*/ 509, // ReduceScatter MinMax u64 RING LL128
/*1629*/ 510, // ReduceScatter MinMax u64 RING SIMPLE
/*1630*/ -1,
/*1631*/ -1,
/*1632*/ 505, // ReduceScatter MinMax u64 COLLNET_DIRECT SIMPLE
/*1633*/ -1,
/*1634*/ -1,
/*1635*/ 506, // ReduceScatter MinMax u64 NVLS SIMPLE
/*1636*/ -1,
/*1637*/ -1,
/*1638*/ 507, // ReduceScatter MinMax u64 PAT SIMPLE
/*1639*/ 474, // ReduceScatter MinMax f16 RING LL
/*1640*/ 475, // ReduceScatter MinMax f16 RING LL128
/*1641*/ 476, // ReduceScatter MinMax f16 RING SIMPLE
/*1642*/ -1,
/*1643*/ -1,
/*1644*/ 471, // ReduceScatter MinMax f16 COLLNET_DIRECT SIMPLE
/*1645*/ -1,
/*1646*/ -1,
/*1647*/ 472, // ReduceScatter MinMax f16 NVLS SIMPLE
/*1648*/ -1,
/*1649*/ -1,
/*1650*/ 473, // ReduceScatter MinMax f16 PAT SIMPLE
/*1651*/ 479, // ReduceScatter MinMax f32 RING LL
/*1652*/ 480, // ReduceScatter MinMax f32 RING LL128
/*1653*/ 481, // ReduceScatter MinMax f32 RING SIMPLE
/*1654*/ -1,
/*1655*/ -1,
/*1656*/ 477, // ReduceScatter MinMax f32 COLLNET_DIRECT SIMPLE
/*1657*/ -1,
/*1658*/ -1,
/*1659*/ -1,
/*1660*/ -1,
/*1661*/ -1,
/*1662*/ 478, // ReduceScatter MinMax f32 PAT SIMPLE
/*1663*/ 484, // ReduceScatter MinMax f64 RING LL
/*1664*/ 485, // ReduceScatter MinMax f64 RING LL128
/*1665*/ 486, // ReduceScatter MinMax f64 RING SIMPLE
/*1666*/ -1,
/*1667*/ -1,
/*1668*/ 482, // ReduceScatter MinMax f64 COLLNET_DIRECT SIMPLE
/*1669*/ -1,
/*1670*/ -1,
/*1671*/ -1,
/*1672*/ -1,
/*1673*/ -1,
/*1674*/ 483, // ReduceScatter MinMax f64 PAT SIMPLE
/*1675*/ 468, // ReduceScatter MinMax bf16 RING LL
/*1676*/ 469, // ReduceScatter MinMax bf16 RING LL128
/*1677*/ 470, // ReduceScatter MinMax bf16 RING SIMPLE
/*1678*/ -1,
/*1679*/ -1,
/*1680*/ 465, // ReduceScatter MinMax bf16 COLLNET_DIRECT SIMPLE
/*1681*/ -1,
/*1682*/ -1,
/*1683*/ 466, // ReduceScatter MinMax bf16 NVLS SIMPLE
/*1684*/ -1,
/*1685*/ -1,
/*1686*/ 467, // ReduceScatter MinMax bf16 PAT SIMPLE
/*1687*/ 489, // ReduceScatter MinMax f8e4m3 RING LL
/*1688*/ 490, // ReduceScatter MinMax f8e4m3 RING LL128
/*1689*/ 491, // ReduceScatter MinMax f8e4m3 RING SIMPLE
/*1690*/ -1,
/*1691*/ -1,
/*1692*/ 487, // ReduceScatter MinMax f8e4m3 COLLNET_DIRECT SIMPLE
/*1693*/ -1,
/*1694*/ -1,
/*1695*/ -1,
/*1696*/ -1,
/*1697*/ -1,
/*1698*/ 488, // ReduceScatter MinMax f8e4m3 PAT SIMPLE
/*1699*/ 494, // ReduceScatter MinMax f8e5m2 RING LL
/*1700*/ 495, // ReduceScatter MinMax f8e5m2 RING LL128
/*1701*/ 496, // ReduceScatter MinMax f8e5m2 RING SIMPLE
/*1702*/ -1,
/*1703*/ -1,
/*1704*/ 492, // ReduceScatter MinMax f8e5m2 COLLNET_DIRECT SIMPLE
/*1705*/ -1,
/*1706*/ -1,
/*1707*/ -1,
/*1708*/ -1,
/*1709*/ -1,
/*1710*/ 493, // ReduceScatter MinMax f8e5m2 PAT SIMPLE
/*1711*/ 558, // ReduceScatter PreMulSum i8 RING LL
/*1712*/ 559, // ReduceScatter PreMulSum i8 RING LL128
/*1713*/ 560, // ReduceScatter PreMulSum i8 RING SIMPLE
/*1714*/ -1,
/*1715*/ -1,
/*1716*/ 556, // ReduceScatter PreMulSum i8 COLLNET_DIRECT SIMPLE
/*1717*/ -1,
/*1718*/ -1,
/*1719*/ -1,
/*1720*/ -1,
/*1721*/ -1,
/*1722*/ 557, // ReduceScatter PreMulSum i8 PAT SIMPLE
/*1723*/ 558, // ReduceScatter PreMulSum u8 RING LL
/*1724*/ 559, // ReduceScatter PreMulSum u8 RING LL128
/*1725*/ 560, // ReduceScatter PreMulSum u8 RING SIMPLE
/*1726*/ -1,
/*1727*/ -1,
/*1728*/ 556, // ReduceScatter PreMulSum u8 COLLNET_DIRECT SIMPLE
/*1729*/ -1,
/*1730*/ -1,
/*1731*/ -1,
/*1732*/ -1,
/*1733*/ -1,
/*1734*/ 557, // ReduceScatter PreMulSum u8 PAT SIMPLE
/*1735*/ 548, // ReduceScatter PreMulSum i32 RING LL
/*1736*/ 549, // ReduceScatter PreMulSum i32 RING LL128
/*1737*/ 550, // ReduceScatter PreMulSum i32 RING SIMPLE
/*1738*/ -1,
/*1739*/ -1,
/*1740*/ 546, // ReduceScatter PreMulSum i32 COLLNET_DIRECT SIMPLE
/*1741*/ -1,
/*1742*/ -1,
/*1743*/ -1,
/*1744*/ -1,
/*1745*/ -1,
/*1746*/ 547, // ReduceScatter PreMulSum i32 PAT SIMPLE
/*1747*/ 548, // ReduceScatter PreMulSum u32 RING LL
/*1748*/ 549, // ReduceScatter PreMulSum u32 RING LL128
/*1749*/ 550, // ReduceScatter PreMulSum u32 RING SIMPLE
/*1750*/ -1,
/*1751*/ -1,
/*1752*/ 546, // ReduceScatter PreMulSum u32 COLLNET_DIRECT SIMPLE
/*1753*/ -1,
/*1754*/ -1,
/*1755*/ -1,
/*1756*/ -1,
/*1757*/ -1,
/*1758*/ 547, // ReduceScatter PreMulSum u32 PAT SIMPLE
/*1759*/ 553, // ReduceScatter PreMulSum i64 RING LL
/*1760*/ 554, // ReduceScatter PreMulSum i64 RING LL128
/*1761*/ 555, // ReduceScatter PreMulSum i64 RING SIMPLE
/*1762*/ -1,
/*1763*/ -1,
/*1764*/ 551, // ReduceScatter PreMulSum i64 COLLNET_DIRECT SIMPLE
/*1765*/ -1,
/*1766*/ -1,
/*1767*/ -1,
/*1768*/ -1,
/*1769*/ -1,
/*1770*/ 552, // ReduceScatter PreMulSum i64 PAT SIMPLE
/*1771*/ 553, // ReduceScatter PreMulSum u64 RING LL
/*1772*/ 554, // ReduceScatter PreMulSum u64 RING LL128
/*1773*/ 555, // ReduceScatter PreMulSum u64 RING SIMPLE
/*1774*/ -1,
/*1775*/ -1,
/*1776*/ 551, // ReduceScatter PreMulSum u64 COLLNET_DIRECT SIMPLE
/*1777*/ -1,
/*1778*/ -1,
/*1779*/ -1,
/*1780*/ -1,
/*1781*/ -1,
/*1782*/ 552, // ReduceScatter PreMulSum u64 PAT SIMPLE
/*1783*/ 523, // ReduceScatter PreMulSum f16 RING LL
/*1784*/ 524, // ReduceScatter PreMulSum f16 RING LL128
/*1785*/ 525, // ReduceScatter PreMulSum f16 RING SIMPLE
/*1786*/ -1,
/*1787*/ -1,
/*1788*/ 521, // ReduceScatter PreMulSum f16 COLLNET_DIRECT SIMPLE
/*1789*/ -1,
/*1790*/ -1,
/*1791*/ -1,
/*1792*/ -1,
/*1793*/ -1,
/*1794*/ 522, // ReduceScatter PreMulSum f16 PAT SIMPLE
/*1795*/ 528, // ReduceScatter PreMulSum f32 RING LL
/*1796*/ 529, // ReduceScatter PreMulSum f32 RING LL128
/*1797*/ 530, // ReduceScatter PreMulSum f32 RING SIMPLE
/*1798*/ -1,
/*1799*/ -1,
/*1800*/ 526, // ReduceScatter PreMulSum f32 COLLNET_DIRECT SIMPLE
/*1801*/ -1,
/*1802*/ -1,
/*1803*/ -1,
/*1804*/ -1,
/*1805*/ -1,
/*1806*/ 527, // ReduceScatter PreMulSum f32 PAT SIMPLE
/*1807*/ 533, // ReduceScatter PreMulSum f64 RING LL
/*1808*/ 534, // ReduceScatter PreMulSum f64 RING LL128
/*1809*/ 535, // ReduceScatter PreMulSum f64 RING SIMPLE
/*1810*/ -1,
/*1811*/ -1,
/*1812*/ 531, // ReduceScatter PreMulSum f64 COLLNET_DIRECT SIMPLE
/*1813*/ -1,
/*1814*/ -1,
/*1815*/ -1,
/*1816*/ -1,
/*1817*/ -1,
/*1818*/ 532, // ReduceScatter PreMulSum f64 PAT SIMPLE
/*1819*/ 518, // ReduceScatter PreMulSum bf16 RING LL
/*1820*/ 519, // ReduceScatter PreMulSum bf16 RING LL128
/*1821*/ 520, // ReduceScatter PreMulSum bf16 RING SIMPLE
/*1822*/ -1,
/*1823*/ -1,
/*1824*/ 516, // ReduceScatter PreMulSum bf16 COLLNET_DIRECT SIMPLE
/*1825*/ -1,
/*1826*/ -1,
/*1827*/ -1,
/*1828*/ -1,
/*1829*/ -1,
/*1830*/ 517, // ReduceScatter PreMulSum bf16 PAT SIMPLE
/*1831*/ 538, // ReduceScatter PreMulSum f8e4m3 RING LL
/*1832*/ 539, // ReduceScatter PreMulSum f8e4m3 RING LL128
/*1833*/ 540, // ReduceScatter PreMulSum f8e4m3 RING SIMPLE
/*1834*/ -1,
/*1835*/ -1,
/*1836*/ 536, // ReduceScatter PreMulSum f8e4m3 COLLNET_DIRECT SIMPLE
/*1837*/ -1,
/*1838*/ -1,
/*1839*/ -1,
/*1840*/ -1,
/*1841*/ -1,
/*1842*/ 537, // ReduceScatter PreMulSum f8e4m3 PAT SIMPLE
/*1843*/ 543, // ReduceScatter PreMulSum f8e5m2 RING LL
/*1844*/ 544, // ReduceScatter PreMulSum f8e5m2 RING LL128
/*1845*/ 545, // ReduceScatter PreMulSum f8e5m2 RING SIMPLE
/*1846*/ -1,
/*1847*/ -1,
/*1848*/ 541, // ReduceScatter PreMulSum f8e5m2 COLLNET_DIRECT SIMPLE
/*1849*/ -1,
/*1850*/ -1,
/*1851*/ -1,
/*1852*/ -1,
/*1853*/ -1,
/*1854*/ 542, // ReduceScatter PreMulSum f8e5m2 PAT SIMPLE
/*1855*/ 669, // ReduceScatter SumPostDiv i8 RING LL
/*1856*/ 670, // ReduceScatter SumPostDiv i8 RING LL128
/*1857*/ 671, // ReduceScatter SumPostDiv i8 RING SIMPLE
/*1858*/ -1,
/*1859*/ -1,
/*1860*/ 667, // ReduceScatter SumPostDiv i8 COLLNET_DIRECT SIMPLE
/*1861*/ -1,
/*1862*/ -1,
/*1863*/ -1,
/*1864*/ -1,
/*1865*/ -1,
/*1866*/ 668, // ReduceScatter SumPostDiv i8 PAT SIMPLE
/*1867*/ 669, // ReduceScatter SumPostDiv u8 RING LL
/*1868*/ 670, // ReduceScatter SumPostDiv u8 RING LL128
/*1869*/ 671, // ReduceScatter SumPostDiv u8 RING SIMPLE
/*1870*/ -1,
/*1871*/ -1,
/*1872*/ 667, // ReduceScatter SumPostDiv u8 COLLNET_DIRECT SIMPLE
/*1873*/ -1,
/*1874*/ -1,
/*1875*/ -1,
/*1876*/ -1,
/*1877*/ -1,
/*1878*/ 668, // ReduceScatter SumPostDiv u8 PAT SIMPLE
/*1879*/ 659, // ReduceScatter SumPostDiv i32 RING LL
/*1880*/ 660, // ReduceScatter SumPostDiv i32 RING LL128
/*1881*/ 661, // ReduceScatter SumPostDiv i32 RING SIMPLE
/*1882*/ -1,
/*1883*/ -1,
/*1884*/ 657, // ReduceScatter SumPostDiv i32 COLLNET_DIRECT SIMPLE
/*1885*/ -1,
/*1886*/ -1,
/*1887*/ -1,
/*1888*/ -1,
/*1889*/ -1,
/*1890*/ 658, // ReduceScatter SumPostDiv i32 PAT SIMPLE
/*1891*/ 659, // ReduceScatter SumPostDiv u32 RING LL
/*1892*/ 660, // ReduceScatter SumPostDiv u32 RING LL128
/*1893*/ 661, // ReduceScatter SumPostDiv u32 RING SIMPLE
/*1894*/ -1,
/*1895*/ -1,
/*1896*/ 657, // ReduceScatter SumPostDiv u32 COLLNET_DIRECT SIMPLE
/*1897*/ -1,
/*1898*/ -1,
/*1899*/ -1,
/*1900*/ -1,
/*1901*/ -1,
/*1902*/ 658, // ReduceScatter SumPostDiv u32 PAT SIMPLE
/*1903*/ 664, // ReduceScatter SumPostDiv i64 RING LL
/*1904*/ 665, // ReduceScatter SumPostDiv i64 RING LL128
/*1905*/ 666, // ReduceScatter SumPostDiv i64 RING SIMPLE
/*1906*/ -1,
/*1907*/ -1,
/*1908*/ 662, // ReduceScatter SumPostDiv i64 COLLNET_DIRECT SIMPLE
/*1909*/ -1,
/*1910*/ -1,
/*1911*/ -1,
/*1912*/ -1,
/*1913*/ -1,
/*1914*/ 663, // ReduceScatter SumPostDiv i64 PAT SIMPLE
/*1915*/ 664, // ReduceScatter SumPostDiv u64 RING LL
/*1916*/ 665, // ReduceScatter SumPostDiv u64 RING LL128
/*1917*/ 666, // ReduceScatter SumPostDiv u64 RING SIMPLE
/*1918*/ -1,
/*1919*/ -1,
/*1920*/ 662, // ReduceScatter SumPostDiv u64 COLLNET_DIRECT SIMPLE
/*1921*/ -1,
/*1922*/ -1,
/*1923*/ -1,
/*1924*/ -1,
/*1925*/ -1,
/*1926*/ 663, // ReduceScatter SumPostDiv u64 PAT SIMPLE
/*1927*/ -1,
/*1928*/ -1,
/*1929*/ -1,
/*1930*/ -1,
/*1931*/ -1,
/*1932*/ -1,
/*1933*/ -1,
/*1934*/ -1,
/*1935*/ -1,
/*1936*/ -1,
/*1937*/ -1,
/*1938*/ -1,
/*1939*/ -1,
/*1940*/ -1,
/*1941*/ -1,
/*1942*/ -1,
/*1943*/ -1,
/*1944*/ -1,
/*1945*/ -1,
/*1946*/ -1,
/*1947*/ -1,
/*1948*/ -1,
/*1949*/ -1,
/*1950*/ -1,
/*1951*/ -1,
/*1952*/ -1,
/*1953*/ -1,
/*1954*/ -1,
/*1955*/ -1,
/*1956*/ -1,
/*1957*/ -1,
/*1958*/ -1,
/*1959*/ -1,
/*1960*/ -1,
/*1961*/ -1,
/*1962*/ -1,
/*1963*/ -1,
/*1964*/ -1,
/*1965*/ -1,
/*1966*/ -1,
/*1967*/ -1,
/*1968*/ -1,
/*1969*/ -1,
/*1970*/ -1,
/*1971*/ -1,
/*1972*/ -1,
/*1973*/ -1,
/*1974*/ -1,
/*1975*/ -1,
/*1976*/ -1,
/*1977*/ -1,
/*1978*/ -1,
/*1979*/ -1,
/*1980*/ -1,
/*1981*/ -1,
/*1982*/ -1,
/*1983*/ -1,
/*1984*/ -1,
/*1985*/ -1,
/*1986*/ -1,
/*1987*/ -1,
/*1988*/ -1,
/*1989*/ -1,
/*1990*/ -1,
/*1991*/ -1,
/*1992*/ -1,
/*1993*/ -1,
/*1994*/ -1,
/*1995*/ -1,
/*1996*/ -1,
/*1997*/ -1,
/*1998*/ -1,
-1};

// coverity[declaration]
__global__ void ncclDevKernel_AllGather_RING_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_AllGatherV_RING_LL(ncclDevKernelArgs4K const);
#if CUDART_VERSION >= 11000
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_bf16_RING_LL(ncclDevKernelArgs4K const);
#endif
#if CUDART_VERSION >= 11000
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_bf16_TREE_LL(ncclDevKernelArgs4K const);
#endif
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_f16_RING_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_f16_TREE_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_f32_RING_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_f32_TREE_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_f64_RING_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_f64_TREE_LL(ncclDevKernelArgs4K const);
#if CUDART_VERSION >= 11080
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_f8e4m3_RING_LL(ncclDevKernelArgs4K const);
#endif
#if CUDART_VERSION >= 11080
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_f8e4m3_TREE_LL(ncclDevKernelArgs4K const);
#endif
#if CUDART_VERSION >= 11080
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_f8e5m2_RING_LL(ncclDevKernelArgs4K const);
#endif
#if CUDART_VERSION >= 11080
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_f8e5m2_TREE_LL(ncclDevKernelArgs4K const);
#endif
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_u32_RING_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_u32_TREE_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_u64_RING_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_u64_TREE_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_u8_RING_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_AllReduce_Sum_u8_TREE_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_Broadcast_RING_LL(ncclDevKernelArgs4K const);
#if CUDART_VERSION >= 11000
// coverity[declaration]
__global__ void ncclDevKernel_Reduce_Sum_bf16_RING_LL(ncclDevKernelArgs4K const);
#endif
// coverity[declaration]
__global__ void ncclDevKernel_Reduce_Sum_f16_RING_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_Reduce_Sum_f32_RING_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_Reduce_Sum_f64_RING_LL(ncclDevKernelArgs4K const);
#if CUDART_VERSION >= 11080
// coverity[declaration]
__global__ void ncclDevKernel_Reduce_Sum_f8e4m3_RING_LL(ncclDevKernelArgs4K const);
#endif
#if CUDART_VERSION >= 11080
// coverity[declaration]
__global__ void ncclDevKernel_Reduce_Sum_f8e5m2_RING_LL(ncclDevKernelArgs4K const);
#endif
// coverity[declaration]
__global__ void ncclDevKernel_Reduce_Sum_u32_RING_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_Reduce_Sum_u64_RING_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_Reduce_Sum_u8_RING_LL(ncclDevKernelArgs4K const);
#if CUDART_VERSION >= 11000
// coverity[declaration]
__global__ void ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL(ncclDevKernelArgs4K const);
#endif
// coverity[declaration]
__global__ void ncclDevKernel_ReduceScatter_Sum_f16_RING_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_ReduceScatter_Sum_f32_RING_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_ReduceScatter_Sum_f64_RING_LL(ncclDevKernelArgs4K const);
#if CUDART_VERSION >= 11080
// coverity[declaration]
__global__ void ncclDevKernel_ReduceScatter_Sum_f8e4m3_RING_LL(ncclDevKernelArgs4K const);
#endif
#if CUDART_VERSION >= 11080
// coverity[declaration]
__global__ void ncclDevKernel_ReduceScatter_Sum_f8e5m2_RING_LL(ncclDevKernelArgs4K const);
#endif
// coverity[declaration]
__global__ void ncclDevKernel_ReduceScatter_Sum_u32_RING_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_ReduceScatter_Sum_u64_RING_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_ReduceScatter_Sum_u8_RING_LL(ncclDevKernelArgs4K const);
// coverity[declaration]
__global__ void ncclDevKernel_SendRecv(ncclDevKernelArgs4K const);

extern int const ncclDevKernelCount = 40;
void* ncclDevKernelList[] = {
/*   0*/ (void*)ncclDevKernel_AllGather_RING_LL,
/*   1*/ (void*)ncclDevKernel_AllGatherV_RING_LL,
#if CUDART_VERSION >= 11000
/*   2*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/*   2*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/*   3*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_TREE_LL,
#else
/*   3*/ nullptr,
#endif
/*   4*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/*   5*/ (void*)ncclDevKernel_AllReduce_Sum_f16_TREE_LL,
/*   6*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/*   7*/ (void*)ncclDevKernel_AllReduce_Sum_f32_TREE_LL,
/*   8*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/*   9*/ (void*)ncclDevKernel_AllReduce_Sum_f64_TREE_LL,
#if CUDART_VERSION >= 11080
/*  10*/ (void*)ncclDevKernel_AllReduce_Sum_f8e4m3_RING_LL,
#else
/*  10*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  11*/ (void*)ncclDevKernel_AllReduce_Sum_f8e4m3_TREE_LL,
#else
/*  11*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  12*/ (void*)ncclDevKernel_AllReduce_Sum_f8e5m2_RING_LL,
#else
/*  12*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  13*/ (void*)ncclDevKernel_AllReduce_Sum_f8e5m2_TREE_LL,
#else
/*  13*/ nullptr,
#endif
/*  14*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/*  15*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/*  16*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/*  17*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/*  18*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/*  19*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
/*  20*/ (void*)ncclDevKernel_Broadcast_RING_LL,
#if CUDART_VERSION >= 11000
/*  21*/ (void*)ncclDevKernel_Reduce_Sum_bf16_RING_LL,
#else
/*  21*/ nullptr,
#endif
/*  22*/ (void*)ncclDevKernel_Reduce_Sum_f16_RING_LL,
/*  23*/ (void*)ncclDevKernel_Reduce_Sum_f32_RING_LL,
/*  24*/ (void*)ncclDevKernel_Reduce_Sum_f64_RING_LL,
#if CUDART_VERSION >= 11080
/*  25*/ (void*)ncclDevKernel_Reduce_Sum_f8e4m3_RING_LL,
#else
/*  25*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  26*/ (void*)ncclDevKernel_Reduce_Sum_f8e5m2_RING_LL,
#else
/*  26*/ nullptr,
#endif
/*  27*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/*  28*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/*  29*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
#if CUDART_VERSION >= 11000
/*  30*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/*  30*/ nullptr,
#endif
/*  31*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/*  32*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/*  33*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
#if CUDART_VERSION >= 11080
/*  34*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e4m3_RING_LL,
#else
/*  34*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  35*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e5m2_RING_LL,
#else
/*  35*/ nullptr,
#endif
/*  36*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/*  37*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/*  38*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/*  39*/ (void*)ncclDevKernel_SendRecv,
nullptr};

int ncclDevKernelRequirements[] = {
        0, /*   0 ncclDevKernel_AllGather_RING_LL*/
        0, /*   1 ncclDevKernel_AllGatherV_RING_LL*/
    11000, /*   2 ncclDevKernel_AllReduce_Sum_bf16_RING_LL*/
    11000, /*   3 ncclDevKernel_AllReduce_Sum_bf16_TREE_LL*/
        0, /*   4 ncclDevKernel_AllReduce_Sum_f16_RING_LL*/
        0, /*   5 ncclDevKernel_AllReduce_Sum_f16_TREE_LL*/
        0, /*   6 ncclDevKernel_AllReduce_Sum_f32_RING_LL*/
        0, /*   7 ncclDevKernel_AllReduce_Sum_f32_TREE_LL*/
        0, /*   8 ncclDevKernel_AllReduce_Sum_f64_RING_LL*/
        0, /*   9 ncclDevKernel_AllReduce_Sum_f64_TREE_LL*/
    11080, /*  10 ncclDevKernel_AllReduce_Sum_f8e4m3_RING_LL*/
    11080, /*  11 ncclDevKernel_AllReduce_Sum_f8e4m3_TREE_LL*/
    11080, /*  12 ncclDevKernel_AllReduce_Sum_f8e5m2_RING_LL*/
    11080, /*  13 ncclDevKernel_AllReduce_Sum_f8e5m2_TREE_LL*/
        0, /*  14 ncclDevKernel_AllReduce_Sum_u32_RING_LL*/
        0, /*  15 ncclDevKernel_AllReduce_Sum_u32_TREE_LL*/
        0, /*  16 ncclDevKernel_AllReduce_Sum_u64_RING_LL*/
        0, /*  17 ncclDevKernel_AllReduce_Sum_u64_TREE_LL*/
        0, /*  18 ncclDevKernel_AllReduce_Sum_u8_RING_LL*/
        0, /*  19 ncclDevKernel_AllReduce_Sum_u8_TREE_LL*/
        0, /*  20 ncclDevKernel_Broadcast_RING_LL*/
    11000, /*  21 ncclDevKernel_Reduce_Sum_bf16_RING_LL*/
        0, /*  22 ncclDevKernel_Reduce_Sum_f16_RING_LL*/
        0, /*  23 ncclDevKernel_Reduce_Sum_f32_RING_LL*/
        0, /*  24 ncclDevKernel_Reduce_Sum_f64_RING_LL*/
    11080, /*  25 ncclDevKernel_Reduce_Sum_f8e4m3_RING_LL*/
    11080, /*  26 ncclDevKernel_Reduce_Sum_f8e5m2_RING_LL*/
        0, /*  27 ncclDevKernel_Reduce_Sum_u32_RING_LL*/
        0, /*  28 ncclDevKernel_Reduce_Sum_u64_RING_LL*/
        0, /*  29 ncclDevKernel_Reduce_Sum_u8_RING_LL*/
    11000, /*  30 ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL*/
        0, /*  31 ncclDevKernel_ReduceScatter_Sum_f16_RING_LL*/
        0, /*  32 ncclDevKernel_ReduceScatter_Sum_f32_RING_LL*/
        0, /*  33 ncclDevKernel_ReduceScatter_Sum_f64_RING_LL*/
    11080, /*  34 ncclDevKernel_ReduceScatter_Sum_f8e4m3_RING_LL*/
    11080, /*  35 ncclDevKernel_ReduceScatter_Sum_f8e5m2_RING_LL*/
        0, /*  36 ncclDevKernel_ReduceScatter_Sum_u32_RING_LL*/
        0, /*  37 ncclDevKernel_ReduceScatter_Sum_u64_RING_LL*/
        0, /*  38 ncclDevKernel_ReduceScatter_Sum_u8_RING_LL*/
        0, /*  39 ncclDevKernel_SendRecv*/
};

extern void* const ncclDevKernelForFunc[] = {
/*   0*/ (void*)ncclDevKernel_AllGather_RING_LL,
/*   1*/ (void*)ncclDevKernel_AllGather_RING_LL,
/*   2*/ (void*)ncclDevKernel_AllGather_RING_LL,
/*   3*/ (void*)ncclDevKernel_AllGather_RING_LL,
/*   4*/ (void*)ncclDevKernel_AllGather_RING_LL,
/*   5*/ (void*)ncclDevKernel_AllGather_RING_LL,
/*   6*/ (void*)ncclDevKernel_AllGatherV_RING_LL,
/*   7*/ (void*)ncclDevKernel_AllGatherV_RING_LL,
/*   8*/ (void*)ncclDevKernel_AllGatherV_RING_LL,
#if CUDART_VERSION >= 11000
/*   9*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/*   9*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/*  10*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/*  10*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/*  11*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/*  11*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/*  12*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/*  12*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/*  13*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/*  13*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/*  14*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/*  14*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/*  15*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/*  15*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/*  16*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_TREE_LL,
#else
/*  16*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/*  17*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_TREE_LL,
#else
/*  17*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/*  18*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_TREE_LL,
#else
/*  18*/ nullptr,
#endif
/*  19*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/*  20*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/*  21*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/*  22*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/*  23*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/*  24*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/*  25*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/*  26*/ (void*)ncclDevKernel_AllReduce_Sum_f16_TREE_LL,
/*  27*/ (void*)ncclDevKernel_AllReduce_Sum_f16_TREE_LL,
/*  28*/ (void*)ncclDevKernel_AllReduce_Sum_f16_TREE_LL,
/*  29*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/*  30*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/*  31*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/*  32*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/*  33*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/*  34*/ (void*)ncclDevKernel_AllReduce_Sum_f32_TREE_LL,
/*  35*/ (void*)ncclDevKernel_AllReduce_Sum_f32_TREE_LL,
/*  36*/ (void*)ncclDevKernel_AllReduce_Sum_f32_TREE_LL,
/*  37*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/*  38*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/*  39*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/*  40*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/*  41*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/*  42*/ (void*)ncclDevKernel_AllReduce_Sum_f64_TREE_LL,
/*  43*/ (void*)ncclDevKernel_AllReduce_Sum_f64_TREE_LL,
/*  44*/ (void*)ncclDevKernel_AllReduce_Sum_f64_TREE_LL,
#if CUDART_VERSION >= 11080
/*  45*/ (void*)ncclDevKernel_AllReduce_Sum_f8e4m3_RING_LL,
#else
/*  45*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  46*/ (void*)ncclDevKernel_AllReduce_Sum_f8e4m3_RING_LL,
#else
/*  46*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  47*/ (void*)ncclDevKernel_AllReduce_Sum_f8e4m3_RING_LL,
#else
/*  47*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  48*/ (void*)ncclDevKernel_AllReduce_Sum_f8e4m3_RING_LL,
#else
/*  48*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  49*/ (void*)ncclDevKernel_AllReduce_Sum_f8e4m3_RING_LL,
#else
/*  49*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  50*/ (void*)ncclDevKernel_AllReduce_Sum_f8e4m3_TREE_LL,
#else
/*  50*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  51*/ (void*)ncclDevKernel_AllReduce_Sum_f8e4m3_TREE_LL,
#else
/*  51*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  52*/ (void*)ncclDevKernel_AllReduce_Sum_f8e4m3_TREE_LL,
#else
/*  52*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  53*/ (void*)ncclDevKernel_AllReduce_Sum_f8e5m2_RING_LL,
#else
/*  53*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  54*/ (void*)ncclDevKernel_AllReduce_Sum_f8e5m2_RING_LL,
#else
/*  54*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  55*/ (void*)ncclDevKernel_AllReduce_Sum_f8e5m2_RING_LL,
#else
/*  55*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  56*/ (void*)ncclDevKernel_AllReduce_Sum_f8e5m2_RING_LL,
#else
/*  56*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  57*/ (void*)ncclDevKernel_AllReduce_Sum_f8e5m2_RING_LL,
#else
/*  57*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  58*/ (void*)ncclDevKernel_AllReduce_Sum_f8e5m2_TREE_LL,
#else
/*  58*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  59*/ (void*)ncclDevKernel_AllReduce_Sum_f8e5m2_TREE_LL,
#else
/*  59*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/*  60*/ (void*)ncclDevKernel_AllReduce_Sum_f8e5m2_TREE_LL,
#else
/*  60*/ nullptr,
#endif
/*  61*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/*  62*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/*  63*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/*  64*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/*  65*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/*  66*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/*  67*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/*  68*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/*  69*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/*  70*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/*  71*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/*  72*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/*  73*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/*  74*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/*  75*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/*  76*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/*  77*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/*  78*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/*  79*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/*  80*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/*  81*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/*  82*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/*  83*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/*  84*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/*  85*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/*  86*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/*  87*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/*  88*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/*  89*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/*  90*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
/*  91*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
/*  92*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
#if CUDART_VERSION >= 11000
/*  93*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/*  93*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/*  94*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/*  94*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/*  95*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/*  95*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/*  96*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/*  96*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/*  97*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/*  97*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/*  98*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_TREE_LL,
#else
/*  98*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/*  99*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_TREE_LL,
#else
/*  99*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 100*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_TREE_LL,
#else
/* 100*/ nullptr,
#endif
/* 101*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/* 102*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/* 103*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/* 104*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/* 105*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/* 106*/ (void*)ncclDevKernel_AllReduce_Sum_f16_TREE_LL,
/* 107*/ (void*)ncclDevKernel_AllReduce_Sum_f16_TREE_LL,
/* 108*/ (void*)ncclDevKernel_AllReduce_Sum_f16_TREE_LL,
/* 109*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/* 110*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/* 111*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/* 112*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/* 113*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/* 114*/ (void*)ncclDevKernel_AllReduce_Sum_f32_TREE_LL,
/* 115*/ (void*)ncclDevKernel_AllReduce_Sum_f32_TREE_LL,
/* 116*/ (void*)ncclDevKernel_AllReduce_Sum_f32_TREE_LL,
/* 117*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/* 118*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/* 119*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/* 120*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/* 121*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/* 122*/ (void*)ncclDevKernel_AllReduce_Sum_f64_TREE_LL,
/* 123*/ (void*)ncclDevKernel_AllReduce_Sum_f64_TREE_LL,
/* 124*/ (void*)ncclDevKernel_AllReduce_Sum_f64_TREE_LL,
#if CUDART_VERSION >= 11080
/* 125*/ (void*)ncclDevKernel_AllReduce_Sum_f8e4m3_RING_LL,
#else
/* 125*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 126*/ (void*)ncclDevKernel_AllReduce_Sum_f8e4m3_RING_LL,
#else
/* 126*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 127*/ (void*)ncclDevKernel_AllReduce_Sum_f8e4m3_RING_LL,
#else
/* 127*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 128*/ (void*)ncclDevKernel_AllReduce_Sum_f8e4m3_RING_LL,
#else
/* 128*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 129*/ (void*)ncclDevKernel_AllReduce_Sum_f8e4m3_RING_LL,
#else
/* 129*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 130*/ (void*)ncclDevKernel_AllReduce_Sum_f8e4m3_TREE_LL,
#else
/* 130*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 131*/ (void*)ncclDevKernel_AllReduce_Sum_f8e4m3_TREE_LL,
#else
/* 131*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 132*/ (void*)ncclDevKernel_AllReduce_Sum_f8e4m3_TREE_LL,
#else
/* 132*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 133*/ (void*)ncclDevKernel_AllReduce_Sum_f8e5m2_RING_LL,
#else
/* 133*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 134*/ (void*)ncclDevKernel_AllReduce_Sum_f8e5m2_RING_LL,
#else
/* 134*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 135*/ (void*)ncclDevKernel_AllReduce_Sum_f8e5m2_RING_LL,
#else
/* 135*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 136*/ (void*)ncclDevKernel_AllReduce_Sum_f8e5m2_RING_LL,
#else
/* 136*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 137*/ (void*)ncclDevKernel_AllReduce_Sum_f8e5m2_RING_LL,
#else
/* 137*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 138*/ (void*)ncclDevKernel_AllReduce_Sum_f8e5m2_TREE_LL,
#else
/* 138*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 139*/ (void*)ncclDevKernel_AllReduce_Sum_f8e5m2_TREE_LL,
#else
/* 139*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 140*/ (void*)ncclDevKernel_AllReduce_Sum_f8e5m2_TREE_LL,
#else
/* 140*/ nullptr,
#endif
/* 141*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 142*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 143*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 144*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 145*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 146*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/* 147*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/* 148*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/* 149*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 150*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 151*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 152*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 153*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 154*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/* 155*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/* 156*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/* 157*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 158*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 159*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 160*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 161*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 162*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
/* 163*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
/* 164*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
#if CUDART_VERSION >= 11000
/* 165*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/* 165*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 166*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/* 166*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 167*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/* 167*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 168*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/* 168*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 169*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/* 169*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 170*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_TREE_LL,
#else
/* 170*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 171*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_TREE_LL,
#else
/* 171*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 172*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_TREE_LL,
#else
/* 172*/ nullptr,
#endif
/* 173*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/* 174*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/* 175*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/* 176*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/* 177*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/* 178*/ (void*)ncclDevKernel_AllReduce_Sum_f16_TREE_LL,
/* 179*/ (void*)ncclDevKernel_AllReduce_Sum_f16_TREE_LL,
/* 180*/ (void*)ncclDevKernel_AllReduce_Sum_f16_TREE_LL,
/* 181*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/* 182*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/* 183*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/* 184*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/* 185*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/* 186*/ (void*)ncclDevKernel_AllReduce_Sum_f32_TREE_LL,
/* 187*/ (void*)ncclDevKernel_AllReduce_Sum_f32_TREE_LL,
/* 188*/ (void*)ncclDevKernel_AllReduce_Sum_f32_TREE_LL,
/* 189*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/* 190*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/* 191*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/* 192*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/* 193*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/* 194*/ (void*)ncclDevKernel_AllReduce_Sum_f64_TREE_LL,
/* 195*/ (void*)ncclDevKernel_AllReduce_Sum_f64_TREE_LL,
/* 196*/ (void*)ncclDevKernel_AllReduce_Sum_f64_TREE_LL,
#if CUDART_VERSION >= 11080
/* 197*/ (void*)ncclDevKernel_AllReduce_Sum_f8e4m3_RING_LL,
#else
/* 197*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 198*/ (void*)ncclDevKernel_AllReduce_Sum_f8e4m3_RING_LL,
#else
/* 198*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 199*/ (void*)ncclDevKernel_AllReduce_Sum_f8e4m3_RING_LL,
#else
/* 199*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 200*/ (void*)ncclDevKernel_AllReduce_Sum_f8e4m3_RING_LL,
#else
/* 200*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 201*/ (void*)ncclDevKernel_AllReduce_Sum_f8e4m3_RING_LL,
#else
/* 201*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 202*/ (void*)ncclDevKernel_AllReduce_Sum_f8e4m3_TREE_LL,
#else
/* 202*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 203*/ (void*)ncclDevKernel_AllReduce_Sum_f8e4m3_TREE_LL,
#else
/* 203*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 204*/ (void*)ncclDevKernel_AllReduce_Sum_f8e4m3_TREE_LL,
#else
/* 204*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 205*/ (void*)ncclDevKernel_AllReduce_Sum_f8e5m2_RING_LL,
#else
/* 205*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 206*/ (void*)ncclDevKernel_AllReduce_Sum_f8e5m2_RING_LL,
#else
/* 206*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 207*/ (void*)ncclDevKernel_AllReduce_Sum_f8e5m2_RING_LL,
#else
/* 207*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 208*/ (void*)ncclDevKernel_AllReduce_Sum_f8e5m2_RING_LL,
#else
/* 208*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 209*/ (void*)ncclDevKernel_AllReduce_Sum_f8e5m2_RING_LL,
#else
/* 209*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 210*/ (void*)ncclDevKernel_AllReduce_Sum_f8e5m2_TREE_LL,
#else
/* 210*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 211*/ (void*)ncclDevKernel_AllReduce_Sum_f8e5m2_TREE_LL,
#else
/* 211*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 212*/ (void*)ncclDevKernel_AllReduce_Sum_f8e5m2_TREE_LL,
#else
/* 212*/ nullptr,
#endif
/* 213*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 214*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 215*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 216*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 217*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 218*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/* 219*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/* 220*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/* 221*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 222*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 223*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 224*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 225*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 226*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/* 227*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/* 228*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/* 229*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 230*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 231*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 232*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 233*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 234*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
/* 235*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
/* 236*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
#if CUDART_VERSION >= 11000
/* 237*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/* 237*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 238*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/* 238*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 239*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/* 239*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 240*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/* 240*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 241*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/* 241*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 242*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/* 242*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 243*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_RING_LL,
#else
/* 243*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 244*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_TREE_LL,
#else
/* 244*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 245*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_TREE_LL,
#else
/* 245*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 246*/ (void*)ncclDevKernel_AllReduce_Sum_bf16_TREE_LL,
#else
/* 246*/ nullptr,
#endif
/* 247*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/* 248*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/* 249*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/* 250*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/* 251*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/* 252*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/* 253*/ (void*)ncclDevKernel_AllReduce_Sum_f16_RING_LL,
/* 254*/ (void*)ncclDevKernel_AllReduce_Sum_f16_TREE_LL,
/* 255*/ (void*)ncclDevKernel_AllReduce_Sum_f16_TREE_LL,
/* 256*/ (void*)ncclDevKernel_AllReduce_Sum_f16_TREE_LL,
/* 257*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/* 258*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/* 259*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/* 260*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/* 261*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/* 262*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/* 263*/ (void*)ncclDevKernel_AllReduce_Sum_f32_RING_LL,
/* 264*/ (void*)ncclDevKernel_AllReduce_Sum_f32_TREE_LL,
/* 265*/ (void*)ncclDevKernel_AllReduce_Sum_f32_TREE_LL,
/* 266*/ (void*)ncclDevKernel_AllReduce_Sum_f32_TREE_LL,
/* 267*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/* 268*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/* 269*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/* 270*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/* 271*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/* 272*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/* 273*/ (void*)ncclDevKernel_AllReduce_Sum_f64_RING_LL,
/* 274*/ (void*)ncclDevKernel_AllReduce_Sum_f64_TREE_LL,
/* 275*/ (void*)ncclDevKernel_AllReduce_Sum_f64_TREE_LL,
/* 276*/ (void*)ncclDevKernel_AllReduce_Sum_f64_TREE_LL,
#if CUDART_VERSION >= 11080
/* 277*/ (void*)ncclDevKernel_AllReduce_Sum_f8e4m3_RING_LL,
#else
/* 277*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 278*/ (void*)ncclDevKernel_AllReduce_Sum_f8e4m3_RING_LL,
#else
/* 278*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 279*/ (void*)ncclDevKernel_AllReduce_Sum_f8e4m3_RING_LL,
#else
/* 279*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 280*/ (void*)ncclDevKernel_AllReduce_Sum_f8e4m3_RING_LL,
#else
/* 280*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 281*/ (void*)ncclDevKernel_AllReduce_Sum_f8e4m3_RING_LL,
#else
/* 281*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 282*/ (void*)ncclDevKernel_AllReduce_Sum_f8e4m3_TREE_LL,
#else
/* 282*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 283*/ (void*)ncclDevKernel_AllReduce_Sum_f8e4m3_TREE_LL,
#else
/* 283*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 284*/ (void*)ncclDevKernel_AllReduce_Sum_f8e4m3_TREE_LL,
#else
/* 284*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 285*/ (void*)ncclDevKernel_AllReduce_Sum_f8e5m2_RING_LL,
#else
/* 285*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 286*/ (void*)ncclDevKernel_AllReduce_Sum_f8e5m2_RING_LL,
#else
/* 286*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 287*/ (void*)ncclDevKernel_AllReduce_Sum_f8e5m2_RING_LL,
#else
/* 287*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 288*/ (void*)ncclDevKernel_AllReduce_Sum_f8e5m2_RING_LL,
#else
/* 288*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 289*/ (void*)ncclDevKernel_AllReduce_Sum_f8e5m2_RING_LL,
#else
/* 289*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 290*/ (void*)ncclDevKernel_AllReduce_Sum_f8e5m2_TREE_LL,
#else
/* 290*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 291*/ (void*)ncclDevKernel_AllReduce_Sum_f8e5m2_TREE_LL,
#else
/* 291*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 292*/ (void*)ncclDevKernel_AllReduce_Sum_f8e5m2_TREE_LL,
#else
/* 292*/ nullptr,
#endif
/* 293*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 294*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 295*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 296*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 297*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 298*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 299*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 300*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/* 301*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/* 302*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/* 303*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 304*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 305*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 306*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 307*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 308*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 309*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 310*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/* 311*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/* 312*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/* 313*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 314*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 315*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 316*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 317*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 318*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
/* 319*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
/* 320*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
/* 321*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 322*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 323*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 324*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 325*/ (void*)ncclDevKernel_AllReduce_Sum_u32_RING_LL,
/* 326*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/* 327*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/* 328*/ (void*)ncclDevKernel_AllReduce_Sum_u32_TREE_LL,
/* 329*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 330*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 331*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 332*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 333*/ (void*)ncclDevKernel_AllReduce_Sum_u64_RING_LL,
/* 334*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/* 335*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/* 336*/ (void*)ncclDevKernel_AllReduce_Sum_u64_TREE_LL,
/* 337*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 338*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 339*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 340*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 341*/ (void*)ncclDevKernel_AllReduce_Sum_u8_RING_LL,
/* 342*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
/* 343*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
/* 344*/ (void*)ncclDevKernel_AllReduce_Sum_u8_TREE_LL,
/* 345*/ (void*)ncclDevKernel_Broadcast_RING_LL,
/* 346*/ (void*)ncclDevKernel_Broadcast_RING_LL,
/* 347*/ (void*)ncclDevKernel_Broadcast_RING_LL,
#if CUDART_VERSION >= 11000
/* 348*/ (void*)ncclDevKernel_Reduce_Sum_bf16_RING_LL,
#else
/* 348*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 349*/ (void*)ncclDevKernel_Reduce_Sum_bf16_RING_LL,
#else
/* 349*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 350*/ (void*)ncclDevKernel_Reduce_Sum_bf16_RING_LL,
#else
/* 350*/ nullptr,
#endif
/* 351*/ (void*)ncclDevKernel_Reduce_Sum_f16_RING_LL,
/* 352*/ (void*)ncclDevKernel_Reduce_Sum_f16_RING_LL,
/* 353*/ (void*)ncclDevKernel_Reduce_Sum_f16_RING_LL,
/* 354*/ (void*)ncclDevKernel_Reduce_Sum_f32_RING_LL,
/* 355*/ (void*)ncclDevKernel_Reduce_Sum_f32_RING_LL,
/* 356*/ (void*)ncclDevKernel_Reduce_Sum_f32_RING_LL,
/* 357*/ (void*)ncclDevKernel_Reduce_Sum_f64_RING_LL,
/* 358*/ (void*)ncclDevKernel_Reduce_Sum_f64_RING_LL,
/* 359*/ (void*)ncclDevKernel_Reduce_Sum_f64_RING_LL,
#if CUDART_VERSION >= 11080
/* 360*/ (void*)ncclDevKernel_Reduce_Sum_f8e4m3_RING_LL,
#else
/* 360*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 361*/ (void*)ncclDevKernel_Reduce_Sum_f8e4m3_RING_LL,
#else
/* 361*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 362*/ (void*)ncclDevKernel_Reduce_Sum_f8e4m3_RING_LL,
#else
/* 362*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 363*/ (void*)ncclDevKernel_Reduce_Sum_f8e5m2_RING_LL,
#else
/* 363*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 364*/ (void*)ncclDevKernel_Reduce_Sum_f8e5m2_RING_LL,
#else
/* 364*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 365*/ (void*)ncclDevKernel_Reduce_Sum_f8e5m2_RING_LL,
#else
/* 365*/ nullptr,
#endif
/* 366*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/* 367*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/* 368*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/* 369*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/* 370*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/* 371*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/* 372*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
/* 373*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
/* 374*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
#if CUDART_VERSION >= 11000
/* 375*/ (void*)ncclDevKernel_Reduce_Sum_bf16_RING_LL,
#else
/* 375*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 376*/ (void*)ncclDevKernel_Reduce_Sum_bf16_RING_LL,
#else
/* 376*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 377*/ (void*)ncclDevKernel_Reduce_Sum_bf16_RING_LL,
#else
/* 377*/ nullptr,
#endif
/* 378*/ (void*)ncclDevKernel_Reduce_Sum_f16_RING_LL,
/* 379*/ (void*)ncclDevKernel_Reduce_Sum_f16_RING_LL,
/* 380*/ (void*)ncclDevKernel_Reduce_Sum_f16_RING_LL,
/* 381*/ (void*)ncclDevKernel_Reduce_Sum_f32_RING_LL,
/* 382*/ (void*)ncclDevKernel_Reduce_Sum_f32_RING_LL,
/* 383*/ (void*)ncclDevKernel_Reduce_Sum_f32_RING_LL,
/* 384*/ (void*)ncclDevKernel_Reduce_Sum_f64_RING_LL,
/* 385*/ (void*)ncclDevKernel_Reduce_Sum_f64_RING_LL,
/* 386*/ (void*)ncclDevKernel_Reduce_Sum_f64_RING_LL,
#if CUDART_VERSION >= 11080
/* 387*/ (void*)ncclDevKernel_Reduce_Sum_f8e4m3_RING_LL,
#else
/* 387*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 388*/ (void*)ncclDevKernel_Reduce_Sum_f8e4m3_RING_LL,
#else
/* 388*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 389*/ (void*)ncclDevKernel_Reduce_Sum_f8e4m3_RING_LL,
#else
/* 389*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 390*/ (void*)ncclDevKernel_Reduce_Sum_f8e5m2_RING_LL,
#else
/* 390*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 391*/ (void*)ncclDevKernel_Reduce_Sum_f8e5m2_RING_LL,
#else
/* 391*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 392*/ (void*)ncclDevKernel_Reduce_Sum_f8e5m2_RING_LL,
#else
/* 392*/ nullptr,
#endif
/* 393*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/* 394*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/* 395*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/* 396*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/* 397*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/* 398*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/* 399*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
/* 400*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
/* 401*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
#if CUDART_VERSION >= 11000
/* 402*/ (void*)ncclDevKernel_Reduce_Sum_bf16_RING_LL,
#else
/* 402*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 403*/ (void*)ncclDevKernel_Reduce_Sum_bf16_RING_LL,
#else
/* 403*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 404*/ (void*)ncclDevKernel_Reduce_Sum_bf16_RING_LL,
#else
/* 404*/ nullptr,
#endif
/* 405*/ (void*)ncclDevKernel_Reduce_Sum_f16_RING_LL,
/* 406*/ (void*)ncclDevKernel_Reduce_Sum_f16_RING_LL,
/* 407*/ (void*)ncclDevKernel_Reduce_Sum_f16_RING_LL,
/* 408*/ (void*)ncclDevKernel_Reduce_Sum_f32_RING_LL,
/* 409*/ (void*)ncclDevKernel_Reduce_Sum_f32_RING_LL,
/* 410*/ (void*)ncclDevKernel_Reduce_Sum_f32_RING_LL,
/* 411*/ (void*)ncclDevKernel_Reduce_Sum_f64_RING_LL,
/* 412*/ (void*)ncclDevKernel_Reduce_Sum_f64_RING_LL,
/* 413*/ (void*)ncclDevKernel_Reduce_Sum_f64_RING_LL,
#if CUDART_VERSION >= 11080
/* 414*/ (void*)ncclDevKernel_Reduce_Sum_f8e4m3_RING_LL,
#else
/* 414*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 415*/ (void*)ncclDevKernel_Reduce_Sum_f8e4m3_RING_LL,
#else
/* 415*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 416*/ (void*)ncclDevKernel_Reduce_Sum_f8e4m3_RING_LL,
#else
/* 416*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 417*/ (void*)ncclDevKernel_Reduce_Sum_f8e5m2_RING_LL,
#else
/* 417*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 418*/ (void*)ncclDevKernel_Reduce_Sum_f8e5m2_RING_LL,
#else
/* 418*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 419*/ (void*)ncclDevKernel_Reduce_Sum_f8e5m2_RING_LL,
#else
/* 419*/ nullptr,
#endif
/* 420*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/* 421*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/* 422*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/* 423*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/* 424*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/* 425*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/* 426*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
/* 427*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
/* 428*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
#if CUDART_VERSION >= 11000
/* 429*/ (void*)ncclDevKernel_Reduce_Sum_bf16_RING_LL,
#else
/* 429*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 430*/ (void*)ncclDevKernel_Reduce_Sum_bf16_RING_LL,
#else
/* 430*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 431*/ (void*)ncclDevKernel_Reduce_Sum_bf16_RING_LL,
#else
/* 431*/ nullptr,
#endif
/* 432*/ (void*)ncclDevKernel_Reduce_Sum_f16_RING_LL,
/* 433*/ (void*)ncclDevKernel_Reduce_Sum_f16_RING_LL,
/* 434*/ (void*)ncclDevKernel_Reduce_Sum_f16_RING_LL,
/* 435*/ (void*)ncclDevKernel_Reduce_Sum_f32_RING_LL,
/* 436*/ (void*)ncclDevKernel_Reduce_Sum_f32_RING_LL,
/* 437*/ (void*)ncclDevKernel_Reduce_Sum_f32_RING_LL,
/* 438*/ (void*)ncclDevKernel_Reduce_Sum_f64_RING_LL,
/* 439*/ (void*)ncclDevKernel_Reduce_Sum_f64_RING_LL,
/* 440*/ (void*)ncclDevKernel_Reduce_Sum_f64_RING_LL,
#if CUDART_VERSION >= 11080
/* 441*/ (void*)ncclDevKernel_Reduce_Sum_f8e4m3_RING_LL,
#else
/* 441*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 442*/ (void*)ncclDevKernel_Reduce_Sum_f8e4m3_RING_LL,
#else
/* 442*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 443*/ (void*)ncclDevKernel_Reduce_Sum_f8e4m3_RING_LL,
#else
/* 443*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 444*/ (void*)ncclDevKernel_Reduce_Sum_f8e5m2_RING_LL,
#else
/* 444*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 445*/ (void*)ncclDevKernel_Reduce_Sum_f8e5m2_RING_LL,
#else
/* 445*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 446*/ (void*)ncclDevKernel_Reduce_Sum_f8e5m2_RING_LL,
#else
/* 446*/ nullptr,
#endif
/* 447*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/* 448*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/* 449*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/* 450*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/* 451*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/* 452*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/* 453*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
/* 454*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
/* 455*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
/* 456*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/* 457*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/* 458*/ (void*)ncclDevKernel_Reduce_Sum_u32_RING_LL,
/* 459*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/* 460*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/* 461*/ (void*)ncclDevKernel_Reduce_Sum_u64_RING_LL,
/* 462*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
/* 463*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
/* 464*/ (void*)ncclDevKernel_Reduce_Sum_u8_RING_LL,
#if CUDART_VERSION >= 11000
/* 465*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 465*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 466*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 466*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 467*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 467*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 468*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 468*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 469*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 469*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 470*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 470*/ nullptr,
#endif
/* 471*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 472*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 473*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 474*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 475*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 476*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 477*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 478*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 479*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 480*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 481*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 482*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
/* 483*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
/* 484*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
/* 485*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
/* 486*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
#if CUDART_VERSION >= 11080
/* 487*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e4m3_RING_LL,
#else
/* 487*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 488*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e4m3_RING_LL,
#else
/* 488*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 489*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e4m3_RING_LL,
#else
/* 489*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 490*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e4m3_RING_LL,
#else
/* 490*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 491*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e4m3_RING_LL,
#else
/* 491*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 492*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e5m2_RING_LL,
#else
/* 492*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 493*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e5m2_RING_LL,
#else
/* 493*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 494*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e5m2_RING_LL,
#else
/* 494*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 495*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e5m2_RING_LL,
#else
/* 495*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 496*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e5m2_RING_LL,
#else
/* 496*/ nullptr,
#endif
/* 497*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 498*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 499*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 500*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 501*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 502*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 503*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 504*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 505*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 506*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 507*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 508*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 509*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 510*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 511*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 512*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 513*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 514*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 515*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
#if CUDART_VERSION >= 11000
/* 516*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 516*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 517*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 517*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 518*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 518*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 519*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 519*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 520*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 520*/ nullptr,
#endif
/* 521*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 522*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 523*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 524*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 525*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 526*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 527*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 528*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 529*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 530*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 531*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
/* 532*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
/* 533*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
/* 534*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
/* 535*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
#if CUDART_VERSION >= 11080
/* 536*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e4m3_RING_LL,
#else
/* 536*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 537*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e4m3_RING_LL,
#else
/* 537*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 538*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e4m3_RING_LL,
#else
/* 538*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 539*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e4m3_RING_LL,
#else
/* 539*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 540*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e4m3_RING_LL,
#else
/* 540*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 541*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e5m2_RING_LL,
#else
/* 541*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 542*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e5m2_RING_LL,
#else
/* 542*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 543*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e5m2_RING_LL,
#else
/* 543*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 544*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e5m2_RING_LL,
#else
/* 544*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 545*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e5m2_RING_LL,
#else
/* 545*/ nullptr,
#endif
/* 546*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 547*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 548*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 549*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 550*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 551*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 552*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 553*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 554*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 555*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 556*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 557*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 558*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 559*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 560*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
#if CUDART_VERSION >= 11000
/* 561*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 561*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 562*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 562*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 563*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 563*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 564*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 564*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 565*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 565*/ nullptr,
#endif
/* 566*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 567*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 568*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 569*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 570*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 571*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 572*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 573*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 574*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 575*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 576*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
/* 577*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
/* 578*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
/* 579*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
/* 580*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
#if CUDART_VERSION >= 11080
/* 581*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e4m3_RING_LL,
#else
/* 581*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 582*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e4m3_RING_LL,
#else
/* 582*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 583*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e4m3_RING_LL,
#else
/* 583*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 584*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e4m3_RING_LL,
#else
/* 584*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 585*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e4m3_RING_LL,
#else
/* 585*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 586*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e5m2_RING_LL,
#else
/* 586*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 587*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e5m2_RING_LL,
#else
/* 587*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 588*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e5m2_RING_LL,
#else
/* 588*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 589*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e5m2_RING_LL,
#else
/* 589*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 590*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e5m2_RING_LL,
#else
/* 590*/ nullptr,
#endif
/* 591*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 592*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 593*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 594*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 595*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 596*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 597*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 598*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 599*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 600*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 601*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 602*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 603*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 604*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 605*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
#if CUDART_VERSION >= 11000
/* 606*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 606*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 607*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 607*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 608*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 608*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 609*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 609*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 610*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 610*/ nullptr,
#endif
#if CUDART_VERSION >= 11000
/* 611*/ (void*)ncclDevKernel_ReduceScatter_Sum_bf16_RING_LL,
#else
/* 611*/ nullptr,
#endif
/* 612*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 613*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 614*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 615*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 616*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 617*/ (void*)ncclDevKernel_ReduceScatter_Sum_f16_RING_LL,
/* 618*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 619*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 620*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 621*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 622*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 623*/ (void*)ncclDevKernel_ReduceScatter_Sum_f32_RING_LL,
/* 624*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
/* 625*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
/* 626*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
/* 627*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
/* 628*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
/* 629*/ (void*)ncclDevKernel_ReduceScatter_Sum_f64_RING_LL,
#if CUDART_VERSION >= 11080
/* 630*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e4m3_RING_LL,
#else
/* 630*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 631*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e4m3_RING_LL,
#else
/* 631*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 632*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e4m3_RING_LL,
#else
/* 632*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 633*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e4m3_RING_LL,
#else
/* 633*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 634*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e4m3_RING_LL,
#else
/* 634*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 635*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e5m2_RING_LL,
#else
/* 635*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 636*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e5m2_RING_LL,
#else
/* 636*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 637*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e5m2_RING_LL,
#else
/* 637*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 638*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e5m2_RING_LL,
#else
/* 638*/ nullptr,
#endif
#if CUDART_VERSION >= 11080
/* 639*/ (void*)ncclDevKernel_ReduceScatter_Sum_f8e5m2_RING_LL,
#else
/* 639*/ nullptr,
#endif
/* 640*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 641*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 642*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 643*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 644*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 645*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 646*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 647*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 648*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 649*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 650*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 651*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 652*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 653*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 654*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 655*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 656*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 657*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 658*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 659*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 660*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 661*/ (void*)ncclDevKernel_ReduceScatter_Sum_u32_RING_LL,
/* 662*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 663*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 664*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 665*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 666*/ (void*)ncclDevKernel_ReduceScatter_Sum_u64_RING_LL,
/* 667*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 668*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 669*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 670*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 671*/ (void*)ncclDevKernel_ReduceScatter_Sum_u8_RING_LL,
/* 672*/ (void*)ncclDevKernel_SendRecv,
nullptr};

extern bool const ncclDevKernelForFuncIsSpecialized[] = {
/*   0*/ 0,
/*   1*/ 0,
/*   2*/ 0,
/*   3*/ 1,
/*   4*/ 0,
/*   5*/ 0,
/*   6*/ 1,
/*   7*/ 0,
/*   8*/ 0,
/*   9*/ 0,
/*  10*/ 0,
/*  11*/ 0,
/*  12*/ 0,
/*  13*/ 0,
/*  14*/ 0,
/*  15*/ 0,
/*  16*/ 0,
/*  17*/ 0,
/*  18*/ 0,
/*  19*/ 0,
/*  20*/ 0,
/*  21*/ 0,
/*  22*/ 0,
/*  23*/ 0,
/*  24*/ 0,
/*  25*/ 0,
/*  26*/ 0,
/*  27*/ 0,
/*  28*/ 0,
/*  29*/ 0,
/*  30*/ 0,
/*  31*/ 0,
/*  32*/ 0,
/*  33*/ 0,
/*  34*/ 0,
/*  35*/ 0,
/*  36*/ 0,
/*  37*/ 0,
/*  38*/ 0,
/*  39*/ 0,
/*  40*/ 0,
/*  41*/ 0,
/*  42*/ 0,
/*  43*/ 0,
/*  44*/ 0,
/*  45*/ 0,
/*  46*/ 0,
/*  47*/ 0,
/*  48*/ 0,
/*  49*/ 0,
/*  50*/ 0,
/*  51*/ 0,
/*  52*/ 0,
/*  53*/ 0,
/*  54*/ 0,
/*  55*/ 0,
/*  56*/ 0,
/*  57*/ 0,
/*  58*/ 0,
/*  59*/ 0,
/*  60*/ 0,
/*  61*/ 0,
/*  62*/ 0,
/*  63*/ 0,
/*  64*/ 0,
/*  65*/ 0,
/*  66*/ 0,
/*  67*/ 0,
/*  68*/ 0,
/*  69*/ 0,
/*  70*/ 0,
/*  71*/ 0,
/*  72*/ 0,
/*  73*/ 0,
/*  74*/ 0,
/*  75*/ 0,
/*  76*/ 0,
/*  77*/ 0,
/*  78*/ 0,
/*  79*/ 0,
/*  80*/ 0,
/*  81*/ 0,
/*  82*/ 0,
/*  83*/ 0,
/*  84*/ 0,
/*  85*/ 0,
/*  86*/ 0,
/*  87*/ 0,
/*  88*/ 0,
/*  89*/ 0,
/*  90*/ 0,
/*  91*/ 0,
/*  92*/ 0,
/*  93*/ 0,
/*  94*/ 0,
/*  95*/ 0,
/*  96*/ 0,
/*  97*/ 0,
/*  98*/ 0,
/*  99*/ 0,
/* 100*/ 0,
/* 101*/ 0,
/* 102*/ 0,
/* 103*/ 0,
/* 104*/ 0,
/* 105*/ 0,
/* 106*/ 0,
/* 107*/ 0,
/* 108*/ 0,
/* 109*/ 0,
/* 110*/ 0,
/* 111*/ 0,
/* 112*/ 0,
/* 113*/ 0,
/* 114*/ 0,
/* 115*/ 0,
/* 116*/ 0,
/* 117*/ 0,
/* 118*/ 0,
/* 119*/ 0,
/* 120*/ 0,
/* 121*/ 0,
/* 122*/ 0,
/* 123*/ 0,
/* 124*/ 0,
/* 125*/ 0,
/* 126*/ 0,
/* 127*/ 0,
/* 128*/ 0,
/* 129*/ 0,
/* 130*/ 0,
/* 131*/ 0,
/* 132*/ 0,
/* 133*/ 0,
/* 134*/ 0,
/* 135*/ 0,
/* 136*/ 0,
/* 137*/ 0,
/* 138*/ 0,
/* 139*/ 0,
/* 140*/ 0,
/* 141*/ 0,
/* 142*/ 0,
/* 143*/ 0,
/* 144*/ 0,
/* 145*/ 0,
/* 146*/ 0,
/* 147*/ 0,
/* 148*/ 0,
/* 149*/ 0,
/* 150*/ 0,
/* 151*/ 0,
/* 152*/ 0,
/* 153*/ 0,
/* 154*/ 0,
/* 155*/ 0,
/* 156*/ 0,
/* 157*/ 0,
/* 158*/ 0,
/* 159*/ 0,
/* 160*/ 0,
/* 161*/ 0,
/* 162*/ 0,
/* 163*/ 0,
/* 164*/ 0,
/* 165*/ 0,
/* 166*/ 0,
/* 167*/ 0,
/* 168*/ 0,
/* 169*/ 0,
/* 170*/ 0,
/* 171*/ 0,
/* 172*/ 0,
/* 173*/ 0,
/* 174*/ 0,
/* 175*/ 0,
/* 176*/ 0,
/* 177*/ 0,
/* 178*/ 0,
/* 179*/ 0,
/* 180*/ 0,
/* 181*/ 0,
/* 182*/ 0,
/* 183*/ 0,
/* 184*/ 0,
/* 185*/ 0,
/* 186*/ 0,
/* 187*/ 0,
/* 188*/ 0,
/* 189*/ 0,
/* 190*/ 0,
/* 191*/ 0,
/* 192*/ 0,
/* 193*/ 0,
/* 194*/ 0,
/* 195*/ 0,
/* 196*/ 0,
/* 197*/ 0,
/* 198*/ 0,
/* 199*/ 0,
/* 200*/ 0,
/* 201*/ 0,
/* 202*/ 0,
/* 203*/ 0,
/* 204*/ 0,
/* 205*/ 0,
/* 206*/ 0,
/* 207*/ 0,
/* 208*/ 0,
/* 209*/ 0,
/* 210*/ 0,
/* 211*/ 0,
/* 212*/ 0,
/* 213*/ 0,
/* 214*/ 0,
/* 215*/ 0,
/* 216*/ 0,
/* 217*/ 0,
/* 218*/ 0,
/* 219*/ 0,
/* 220*/ 0,
/* 221*/ 0,
/* 222*/ 0,
/* 223*/ 0,
/* 224*/ 0,
/* 225*/ 0,
/* 226*/ 0,
/* 227*/ 0,
/* 228*/ 0,
/* 229*/ 0,
/* 230*/ 0,
/* 231*/ 0,
/* 232*/ 0,
/* 233*/ 0,
/* 234*/ 0,
/* 235*/ 0,
/* 236*/ 0,
/* 237*/ 0,
/* 238*/ 0,
/* 239*/ 0,
/* 240*/ 0,
/* 241*/ 1,
/* 242*/ 0,
/* 243*/ 0,
/* 244*/ 1,
/* 245*/ 0,
/* 246*/ 0,
/* 247*/ 0,
/* 248*/ 0,
/* 249*/ 0,
/* 250*/ 0,
/* 251*/ 1,
/* 252*/ 0,
/* 253*/ 0,
/* 254*/ 1,
/* 255*/ 0,
/* 256*/ 0,
/* 257*/ 0,
/* 258*/ 0,
/* 259*/ 0,
/* 260*/ 0,
/* 261*/ 1,
/* 262*/ 0,
/* 263*/ 0,
/* 264*/ 1,
/* 265*/ 0,
/* 266*/ 0,
/* 267*/ 0,
/* 268*/ 0,
/* 269*/ 0,
/* 270*/ 0,
/* 271*/ 1,
/* 272*/ 0,
/* 273*/ 0,
/* 274*/ 1,
/* 275*/ 0,
/* 276*/ 0,
/* 277*/ 0,
/* 278*/ 0,
/* 279*/ 1,
/* 280*/ 0,
/* 281*/ 0,
/* 282*/ 1,
/* 283*/ 0,
/* 284*/ 0,
/* 285*/ 0,
/* 286*/ 0,
/* 287*/ 1,
/* 288*/ 0,
/* 289*/ 0,
/* 290*/ 1,
/* 291*/ 0,
/* 292*/ 0,
/* 293*/ 0,
/* 294*/ 0,
/* 295*/ 0,
/* 296*/ 0,
/* 297*/ 1,
/* 298*/ 0,
/* 299*/ 0,
/* 300*/ 1,
/* 301*/ 0,
/* 302*/ 0,
/* 303*/ 0,
/* 304*/ 0,
/* 305*/ 0,
/* 306*/ 0,
/* 307*/ 1,
/* 308*/ 0,
/* 309*/ 0,
/* 310*/ 1,
/* 311*/ 0,
/* 312*/ 0,
/* 313*/ 0,
/* 314*/ 0,
/* 315*/ 1,
/* 316*/ 0,
/* 317*/ 0,
/* 318*/ 1,
/* 319*/ 0,
/* 320*/ 0,
/* 321*/ 0,
/* 322*/ 0,
/* 323*/ 0,
/* 324*/ 0,
/* 325*/ 0,
/* 326*/ 0,
/* 327*/ 0,
/* 328*/ 0,
/* 329*/ 0,
/* 330*/ 0,
/* 331*/ 0,
/* 332*/ 0,
/* 333*/ 0,
/* 334*/ 0,
/* 335*/ 0,
/* 336*/ 0,
/* 337*/ 0,
/* 338*/ 0,
/* 339*/ 0,
/* 340*/ 0,
/* 341*/ 0,
/* 342*/ 0,
/* 343*/ 0,
/* 344*/ 0,
/* 345*/ 1,
/* 346*/ 0,
/* 347*/ 0,
/* 348*/ 0,
/* 349*/ 0,
/* 350*/ 0,
/* 351*/ 0,
/* 352*/ 0,
/* 353*/ 0,
/* 354*/ 0,
/* 355*/ 0,
/* 356*/ 0,
/* 357*/ 0,
/* 358*/ 0,
/* 359*/ 0,
/* 360*/ 0,
/* 361*/ 0,
/* 362*/ 0,
/* 363*/ 0,
/* 364*/ 0,
/* 365*/ 0,
/* 366*/ 0,
/* 367*/ 0,
/* 368*/ 0,
/* 369*/ 0,
/* 370*/ 0,
/* 371*/ 0,
/* 372*/ 0,
/* 373*/ 0,
/* 374*/ 0,
/* 375*/ 0,
/* 376*/ 0,
/* 377*/ 0,
/* 378*/ 0,
/* 379*/ 0,
/* 380*/ 0,
/* 381*/ 0,
/* 382*/ 0,
/* 383*/ 0,
/* 384*/ 0,
/* 385*/ 0,
/* 386*/ 0,
/* 387*/ 0,
/* 388*/ 0,
/* 389*/ 0,
/* 390*/ 0,
/* 391*/ 0,
/* 392*/ 0,
/* 393*/ 0,
/* 394*/ 0,
/* 395*/ 0,
/* 396*/ 0,
/* 397*/ 0,
/* 398*/ 0,
/* 399*/ 0,
/* 400*/ 0,
/* 401*/ 0,
/* 402*/ 0,
/* 403*/ 0,
/* 404*/ 0,
/* 405*/ 0,
/* 406*/ 0,
/* 407*/ 0,
/* 408*/ 0,
/* 409*/ 0,
/* 410*/ 0,
/* 411*/ 0,
/* 412*/ 0,
/* 413*/ 0,
/* 414*/ 0,
/* 415*/ 0,
/* 416*/ 0,
/* 417*/ 0,
/* 418*/ 0,
/* 419*/ 0,
/* 420*/ 0,
/* 421*/ 0,
/* 422*/ 0,
/* 423*/ 0,
/* 424*/ 0,
/* 425*/ 0,
/* 426*/ 0,
/* 427*/ 0,
/* 428*/ 0,
/* 429*/ 1,
/* 430*/ 0,
/* 431*/ 0,
/* 432*/ 1,
/* 433*/ 0,
/* 434*/ 0,
/* 435*/ 1,
/* 436*/ 0,
/* 437*/ 0,
/* 438*/ 1,
/* 439*/ 0,
/* 440*/ 0,
/* 441*/ 1,
/* 442*/ 0,
/* 443*/ 0,
/* 444*/ 1,
/* 445*/ 0,
/* 446*/ 0,
/* 447*/ 1,
/* 448*/ 0,
/* 449*/ 0,
/* 450*/ 1,
/* 451*/ 0,
/* 452*/ 0,
/* 453*/ 1,
/* 454*/ 0,
/* 455*/ 0,
/* 456*/ 0,
/* 457*/ 0,
/* 458*/ 0,
/* 459*/ 0,
/* 460*/ 0,
/* 461*/ 0,
/* 462*/ 0,
/* 463*/ 0,
/* 464*/ 0,
/* 465*/ 0,
/* 466*/ 0,
/* 467*/ 0,
/* 468*/ 0,
/* 469*/ 0,
/* 470*/ 0,
/* 471*/ 0,
/* 472*/ 0,
/* 473*/ 0,
/* 474*/ 0,
/* 475*/ 0,
/* 476*/ 0,
/* 477*/ 0,
/* 478*/ 0,
/* 479*/ 0,
/* 480*/ 0,
/* 481*/ 0,
/* 482*/ 0,
/* 483*/ 0,
/* 484*/ 0,
/* 485*/ 0,
/* 486*/ 0,
/* 487*/ 0,
/* 488*/ 0,
/* 489*/ 0,
/* 490*/ 0,
/* 491*/ 0,
/* 492*/ 0,
/* 493*/ 0,
/* 494*/ 0,
/* 495*/ 0,
/* 496*/ 0,
/* 497*/ 0,
/* 498*/ 0,
/* 499*/ 0,
/* 500*/ 0,
/* 501*/ 0,
/* 502*/ 0,
/* 503*/ 0,
/* 504*/ 0,
/* 505*/ 0,
/* 506*/ 0,
/* 507*/ 0,
/* 508*/ 0,
/* 509*/ 0,
/* 510*/ 0,
/* 511*/ 0,
/* 512*/ 0,
/* 513*/ 0,
/* 514*/ 0,
/* 515*/ 0,
/* 516*/ 0,
/* 517*/ 0,
/* 518*/ 0,
/* 519*/ 0,
/* 520*/ 0,
/* 521*/ 0,
/* 522*/ 0,
/* 523*/ 0,
/* 524*/ 0,
/* 525*/ 0,
/* 526*/ 0,
/* 527*/ 0,
/* 528*/ 0,
/* 529*/ 0,
/* 530*/ 0,
/* 531*/ 0,
/* 532*/ 0,
/* 533*/ 0,
/* 534*/ 0,
/* 535*/ 0,
/* 536*/ 0,
/* 537*/ 0,
/* 538*/ 0,
/* 539*/ 0,
/* 540*/ 0,
/* 541*/ 0,
/* 542*/ 0,
/* 543*/ 0,
/* 544*/ 0,
/* 545*/ 0,
/* 546*/ 0,
/* 547*/ 0,
/* 548*/ 0,
/* 549*/ 0,
/* 550*/ 0,
/* 551*/ 0,
/* 552*/ 0,
/* 553*/ 0,
/* 554*/ 0,
/* 555*/ 0,
/* 556*/ 0,
/* 557*/ 0,
/* 558*/ 0,
/* 559*/ 0,
/* 560*/ 0,
/* 561*/ 0,
/* 562*/ 0,
/* 563*/ 0,
/* 564*/ 0,
/* 565*/ 0,
/* 566*/ 0,
/* 567*/ 0,
/* 568*/ 0,
/* 569*/ 0,
/* 570*/ 0,
/* 571*/ 0,
/* 572*/ 0,
/* 573*/ 0,
/* 574*/ 0,
/* 575*/ 0,
/* 576*/ 0,
/* 577*/ 0,
/* 578*/ 0,
/* 579*/ 0,
/* 580*/ 0,
/* 581*/ 0,
/* 582*/ 0,
/* 583*/ 0,
/* 584*/ 0,
/* 585*/ 0,
/* 586*/ 0,
/* 587*/ 0,
/* 588*/ 0,
/* 589*/ 0,
/* 590*/ 0,
/* 591*/ 0,
/* 592*/ 0,
/* 593*/ 0,
/* 594*/ 0,
/* 595*/ 0,
/* 596*/ 0,
/* 597*/ 0,
/* 598*/ 0,
/* 599*/ 0,
/* 600*/ 0,
/* 601*/ 0,
/* 602*/ 0,
/* 603*/ 0,
/* 604*/ 0,
/* 605*/ 0,
/* 606*/ 0,
/* 607*/ 0,
/* 608*/ 0,
/* 609*/ 1,
/* 610*/ 0,
/* 611*/ 0,
/* 612*/ 0,
/* 613*/ 0,
/* 614*/ 0,
/* 615*/ 1,
/* 616*/ 0,
/* 617*/ 0,
/* 618*/ 0,
/* 619*/ 0,
/* 620*/ 0,
/* 621*/ 1,
/* 622*/ 0,
/* 623*/ 0,
/* 624*/ 0,
/* 625*/ 0,
/* 626*/ 0,
/* 627*/ 1,
/* 628*/ 0,
/* 629*/ 0,
/* 630*/ 0,
/* 631*/ 0,
/* 632*/ 1,
/* 633*/ 0,
/* 634*/ 0,
/* 635*/ 0,
/* 636*/ 0,
/* 637*/ 1,
/* 638*/ 0,
/* 639*/ 0,
/* 640*/ 0,
/* 641*/ 0,
/* 642*/ 0,
/* 643*/ 1,
/* 644*/ 0,
/* 645*/ 0,
/* 646*/ 0,
/* 647*/ 0,
/* 648*/ 0,
/* 649*/ 1,
/* 650*/ 0,
/* 651*/ 0,
/* 652*/ 0,
/* 653*/ 0,
/* 654*/ 1,
/* 655*/ 0,
/* 656*/ 0,
/* 657*/ 0,
/* 658*/ 0,
/* 659*/ 0,
/* 660*/ 0,
/* 661*/ 0,
/* 662*/ 0,
/* 663*/ 0,
/* 664*/ 0,
/* 665*/ 0,
/* 666*/ 0,
/* 667*/ 0,
/* 668*/ 0,
/* 669*/ 0,
/* 670*/ 0,
/* 671*/ 0,
/* 672*/ 1,
0};
