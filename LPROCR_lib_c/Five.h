int FiveMask [20][40]= {
{ 1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  -1,  -1,  -1,  -1,  -1,  -1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  -1,  -1,  -1,  1,  1,  1,  1,   },
{ 1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  -1,  -1,  -1,  -1,  -1,  -1,  1,  1,   },
{ 1,  1,  1,  1,  1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,  1,  1,  1,  1,  1,  1,  1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,   },
{ -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,  1,  1,  1,  1,  1,  1,  1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,   },
{ -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,  1,  1,  1,  1,  1,  1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,   },
{ -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,  1,  1,  1,  1,  1,  1,  1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,   },
{ -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  -1,  -1,  -1,  -1,  -1,  -1,  1,   },
{ -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,  1,  1,  1,  1,  1,  1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  -1,  -1,  -1,  -1,  -1,  -1,  1,   },
{ -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  -1,  -1,  -1,  -1,  -1,  -1,  1,   },
{ -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  -1,  -1,  -1,  -1,  -1,  -1,  1,   },
{ -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  -1,  -1,  -1,  -1,  -1,  -1,  1,   },
{ -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  -1,  -1,  -1,  -1,  -1,  -1,  1,   },
{ -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  -1,  -1,  -1,  -1,  -1,  -1,  1,   },
{ -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  -1,  -1,  -1,  -1,  -1,  -1,  1,   },
{ -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,   },
{ -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,   },
{ -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,   },
{ -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,  1,   },
{ -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,  1,  1,   },
{ 1,  -1,  -1,  -1,  -1,  -1,  -1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  1,  1,  1,  1,   }
 };
