# azure_sky_ros2
這里實現了對底盤電機的驅動,並把其數據發佈到state interface, 

todo:設定雲台部份的關節

todo:正確地引入麥輪控制器

todo:引入雲台的控制器

todo:把dji的控制信號接收器初始化,並打包成state interface

重要文件:
    src/controlko_description/urdf/rrbot/rrbot_macro.ros2_control.xacro 這是ros2_control的描述檔,用來設定有哪些關節可用
    
    src/my_hardware_interface 硬件介面的目錄
    
    src/my_hardware_interface/CMakeLists.txt 硬件介面的工程文檔,加入依賴包要在這里聲明
    
    src/my_hardware_interface/package.xml 同上加入依賴包要在這里聲明
    
    src/my_hardware_interface/src/rrbot_hardware_interface.cpp 硬件介面本體,
    load進以後會初始化硬體資源並發佈成state interface和command interface以供ros2的其他節點或控制器使用
    該程式之後會進入read()和write()的循環,可以在其中定義如何新state interface(read)和如何控制硬體(write)
    
    src/controlko_bringup/config/rrbot_controllers.yaml 控制器描述檔
    
    src/controlko_bringup/launch/rrbot_real.launch.py launch檔,決定項目中會有哪些文件會啟動
    

