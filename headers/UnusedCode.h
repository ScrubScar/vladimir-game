// The method was used in the engine to load only one page of the map at a time

//void engine::check_map_align_x()
//{    
//     object_local = player_one.get_player_rect();
//     
//     if(object_local.x + object_local.w >= 0 )
//      {
//            map_check_player = 0;
//            for(int a = 0; a < 24; a ++)
//            { for(int b = 0; b < 32; b++) { map_check_array[a][b] = map_one_section_one[a][b];} }
//           
//        }
//     
//      if(object_local.x + object_local.w  >= 800 )
//       {
//        map_check_player = 800;
//            for(int a = 0; a < 24; a ++)
//            { for(int b = 0; b < 32; b++) { map_check_array[a][b] = map_one_section_two[a][b] ;} }
//            
//           }   
//           
//       if(object_local.x + object_local.w >= 1600  )
//      {
//           map_check_player = 1600;
//           for(int a = 0; a < 24; a++) 
//           {  for(int b = 0; b < 32; b++) {  map_check_array[a][b] = map_one_section_three[a][b]; } }   
//             
//        }
//        
//      
//      if(object_local.x + object_local.w >= 2400 )
//      {
//          map_check_player = 2400;
//          for(int a = 0; a < 24; a++)
//          {  for(int b = 0; b < 32; b++ ) {map_check_array[a][b] = map_one_section_four[a][b]; } }
//          
//        }
//        
//        
//}
// void player::move(SDL_Event event, SDL_Joystick &stick)
//{
//      
//      if(event.type == SDL_JOYBUTTONUP)
//      {
//          if(event.jbutton.button == 1)
//          {
//              jump_button_is_down = false;
//              }
//          }
//          
//      if(playerIsJumping == true )
//     {
//        jump();
//        }
//        
//      button = SDL_JoystickGetButton(&stick, 1);
//      axis = SDL_JoystickGetAxis(&stick, 0);
//      
//      if(button == 1 && jump_button_is_down == false)
//         {
//             if(playerIsFalling == false && playerIsJumping == false) 
//            {                                
//                jumpHeight = 210;
//                playerIsJumping = true; 
//                }          
//                    jump_button_is_down = true; 
//                    }
//      
//      if( axis < -30000 )
//      {
//          playerRect.x = playerRect.x - 8; 
//          while(collision_with_map.object_map_collision(playerRect, playerCollisionDirection) == true)
//          {
//              playerRect.x = playerRect.x + 1;
//              }
//              playerDirectionFacing = 1;
//          }
//                 
//      if( axis > 0 )
//      {
//          playerRect.x = playerRect.x + 8;
//          while(collision_with_map.object_map_collision(playerRect, playerCollisionDirection) == true)
//          {
//              playerRect.x = playerRect.x - 1; 
//              }
//              playerDirectionFacing = 2;
//              }
//
//    // keystates = SDL_GetKeyState(NULL);
//
////      if( event.type == SDL_KEYUP  ) 
////     {
////         switch( event.key.keysym.sym ) 
////         {
////                 case SDLK_d:     shoot_button_is_down = false;
////                 case SDLK_SPACE: jump_button_is_down = false;
////                 }
////         }
////         
//
//     
//    
//            
//   
////     if( keystates[SDLK_d] && !shoot_button_is_down) 
////     {
//             //shoot_button_is_down = true;
////             missleNumber++;
////             if(missleNumber > 13)
////                 {
////                   missleNumber = 1;
////                   missleArray[missleNumber][2] = 0;
////
////                   }
////              if(missleNumber > 0 )
////              {
////                  if(playerIsFacing == 1)
////                  { missleArray[missleNumber][0] =  player_one.get_player_x() + 25; }
////                  if(playerIsFacing == 2)
////                  { missleArray[missleNumber][0] =  player_one.get_player_x() + 10;} 
////                                   
////                    missleArray[missleNumber][1] =  player_one.get_player_y() + (player_one.get_player_h() / 2);
////                    missleArray[missleNumber][2] = 1;
////                    missleArray[missleNumber][3] = playerIsFacing;
////                    }
////              }
////                ;}
//       }

//void collision::check_map_page(int page_number, int page_level)
//{
//     switch(page_number)
//     {
//         case 0:  if(page_level == 0)
//                  {
//                    for(int a = 0; a < 24; a ++){ 
//                        for(int b = 0; b < 32; b++) { 
//                            map_check_array[a][b] = map_one_section_one[a][b];
//                                } } 
//                        }
//                        
//                   if(page_level == 1)
//                   {             
//                       for(int a = 0; a < 24; a ++){ 
//                           for(int b = 0; b < 32; b++) {
//                               map_check_array[a][b] = map_one_section_five[a][b];
//                               }}
//                        }
//                    break;
//         
//         case 1:  if(page_level == 0)
//                  {
//                    for(int a = 0; a < 24; a ++){ 
//                        for(int b = 0; b < 32; b++) { 
//                            map_check_array[a][b] = map_one_section_two[a][b];
//                                } } 
//                        }
//                        
//                   if(page_level == 1)
//                   {             
//                       for(int a = 0; a < 24; a ++){ 
//                           for(int b = 0; b < 32; b++) {
//                               map_check_array[a][b] = map_one_section_six[a][b];
//                               } }
//                        }
//                    break;
//                      
//         case 2:  if(page_level == 0)
//                  {
//                    for(int a = 0; a < 24; a ++){ 
//                        for(int b = 0; b < 32; b++) { 
//                            map_check_array[a][b] = map_one_section_three[a][b];
//                                } }
//                        }
//                        
//                   if(page_level == 1)
//                   {             
//                       for(int a = 0; a < 24; a ++){ 
//                           for(int b = 0; b < 32; b++) {
//                               map_check_array[a][b] = map_one_section_seven[a][b];
//                               } } 
//                        }
//                    break;
//                      
//         
//         case 3:  if(page_level == 0)
//                  {
//                    for(int a = 0; a < 24; a ++){ 
//                        for(int b = 0; b < 32; b++) { 
//                            map_check_array[a][b] = map_one_section_four[a][b];
//                                } }
//                        }
//                        
//                   if(page_level = 1)
//                   {             
//                       for(int a = 0; a < 24; a ++){ 
//                           for(int b = 0; b < 32; b++) {
//                               map_check_array[a][b] = map_one_section_eight[a][b];
//                               }}
//                        }
//                    break;      
//         }
//     }

//bool collision:: object_map_collision(SDL_Rect &object, int &object_collision_direction)
//{
//     object_local = object;
//     int loopX = 0, loopY = 0, j= 0, k = 0;
//     tile_row = 0;
//     tile_column = 0;
//     tile_x = map_page;
//     tile_y = 0;
//
//    while( page_level < 2)
//    {       
//        theTiles = 0;   
//        j = 0;
//        k = 0;
//        loopY = 0;
//        loopX = 0;
//        tile_x = 0;
//        tile_y = 600 * page_level;
//      while( theTiles < 4 )
//      {
//            check_map_page(theTiles, page_level );
//            j = 0;
//            k = 0;
//            loopY = 0;
//            loopX = 0;
//            tile_x = 0;
//             while(loopY < 24)
//             {
//                 while(loopX < 32)
//                 {
//                     if(map_check_array[j][k] == 0) { tile_x = tile_x + 25;  k = k + 1;}    
//                      
//                         else if( map_check_array[j][k] > 0){
//                                      if( (object.x >= tile_x)  && (object.x < tile_x + 25) && 
//                                            (object.y + object.h > tile_y) &&
//                                            (object.y < tile_y + 25))
//                                            {
//                                               if(object.y > tile_y )
//                                               {
//                                                   object_collision_direction = 1;
//                                                   }
//                                               if(object.y < tile_y)
//                                               {                                    
//                                                   object_collision_direction = 2;
//                                                   }
//                                               tile_y = 600 * page_level, tile_x = 800 * theTiles;
//                                               tile_column = 0, tile_row =0;     
//                                               return true;
//                                               }
//
//                                      tile_x = tile_x + 25;
//                                      k = k + 1;
//                                      }
//                         loopX = loopX + 1;
//                         tile_x = 800 * theTiles;
//                            }
//                  j = j + 1;
//                  tile_y = tile_y + 25;
//                  tile_x = 800 * theTiles;
//                  loopX = 0;
//                  loopY = loopY + 1;  
//                  k = 0;        
//                  }
//            tile_y = 600 * page_level;
//            theTiles++;      
//             }
//          page_level++;
//          }   
//    tile_x = 0; tile_y = 0;
//    theTiles = 0; page_level = 0;
// }

     //player_position_x = object_local.x + object_local.w;
//     player_position_y = object_local.y + object_local.h;
//     
//     if(player_position_x >= PART_ONE)
//      {    
//           if( player_position_y <  600 )
//           {         
//                  map_page = PART_ONE;
//                  page_level = 0;
//                  for(int a = 0; a < 24; a ++)
//                  { for(int b = 0; b < 32; b++) { local_array[a][b] = map_one_section_one[a][b];} }
//                }
//                
//           if( player_position_y >= 600 )
//           {
//                   map_page = PART_ONE;
//                   page_level = 600;
//                   for(int a = 0; a < 24; a ++)
//                      { for(int b = 0; b < 32; b++) { local_array[a][b] = map_one_section_five[a][b];} }
//               }
//        }
//     
//      if( player_position_x  >= PART_TWO )
//       {
//           if( player_position_y <  600 )
//           {         
//                  map_page = PART_TWO;
//                  page_level = 0;
//                  for(int a = 0; a < 24; a ++)
//                  { for(int b = 0; b < 32; b++) { local_array[a][b] = map_one_section_two[a][b];} }
//                }
//                
//           if( player_position_y >= 600 )
//           {
//                   map_page = PART_TWO;
//                   page_level = 600;
//                   for(int a = 0; a < 24; a ++)
//                      { for(int b = 0; b < 32; b++) { local_array[a][b] = map_one_section_six[a][b];} }
//               }
//           }   
//           
//       if( player_position_x > PART_THREE )
//      {
//           if( player_position_y <  600 )
//           {         
//                  map_page = PART_THREE;
//                  page_level = 0;
//                  for(int a = 0; a < 24; a ++)
//                  { for(int b = 0; b < 32; b++) { local_array[a][b] = map_one_section_three[a][b];} }
//                }
//                
//           if( player_position_y >= 600 )
//           {
//                   map_page = PART_THREE;
//                   page_level = 600;
//                   for(int a = 0; a < 24; a ++)
//                      { for(int b = 0; b < 32; b++) { local_array[a][b] = map_one_section_seven[a][b];} }
//               }  
//        }
//        
//       if( player_position_x > PART_FOUR )
//      {
//           if( player_position_y <  600 )
//           {         
//                  map_page = PART_FOUR;
//                  page_level = 0;
//                  for(int a = 0; a < 24; a ++)
//                  { for(int b = 0; b < 32; b++) { local_array[a][b] = map_one_section_four[a][b];} }
//                }
//                
//           if( player_position_y >= 600 )
//           {
//                   map_page = PART_FOUR;
//                   page_level = 600;
//                   for(int a = 0; a < 24; a ++)
//                      { for(int b = 0; b < 32; b++) { local_array[a][b] = map_one_section_eight[a][b];} }
//               }  
//        }




    
    
