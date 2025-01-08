## Bluetooth controlled hovercraft project

- Niklas Raesalmi 
- Niranjan Sreegith
- Leevi Ulvinen
- Kasperi Ervasti


<details>
  <summary>Introduction</summary>

  ## What is Your Concept?

  Describe the concept in detail.
  ![hoovercraft](./Project%20documentation/hoovercraft.webp)


   Our idea is to make a Bluetooth-controlled miniature hovercraft that'll be made to run on land. It will work by having two fans, with one blowing air downwards to inflate the skirt, and the other moving the craft. The direction of the hovercraft is controlled with flaps placed behind the fan on the back to direct the airflow. Hovercrafts work by flowing enough air under itself to barely lift the craft from the ground, making it "hover". Below is a picture that explains the process: 

   ![howitworks](./Project%20documentation/how-hovercraft-work-1024x438.png)

   [How Does a Hovercraft Work?](https://www.amphibiousmarine.com/how-does-a-hovercraft-work/)

  The fan blades will be spun with brushless dc motors, and the flaps with a servo motor. Only the servo motor and the brushless dc motor on the back will be controlled with the Bluetooth controller, and the fan on the bottom will be constantly blowing air to inflate the skirt once power has been turned on. A Bluetooth module will receive instructions and feed them to an Arduino from a controller to move the craft. The motor on the back will be able to spin in either direction to move the craft forwards or in reverse. The base of the craft will be made out of a laser-cut piece with screwholes to attach the cover for the components and both the fans. There will be a circular hole in the center of the base where the skirt will inflate from. The cover for all the components that will be placed on the base will be made with a 3d printer out of ABS or other though plastic. Also, the same material will be used to make the fan blades and the stand for the fan on the back. The skirt of the craft will be made out of a though but malleable plastic such as a thick trash bag.

  ## How Did You Arrive at This Concept?

  Our first idea was to make a radio-controlled car, but we thought of making something more original and unique. We thought of making a drone, but it seemed way too difficult to produce with the time and materials given. One of us remembered seeing a radio-controlled hovercraft once, and we took up the idea. We got a tip that making the controller be connected via Bluetooth is easier than having it be through radio waves, we combined both ideas and came up with the Bluetooth-controlled hovercraft. We looked up how rc hovercrafts are made and used the designs as a reference to come up with a rough sketch. 

  ## What Were Your Design Sketches?

  Describe functionality, other options you considered while deciding on your design. Add images! Our first sketch includes a very boxy shape for the body with the back fan placed very high up top. The base of the craft is a flat piece with a hole in the center for airflow to inflate the skirt shown under the base. In the large sketch, the back fan is attached to the cover but in the top left corner, a hole is made in the cover for the fan to be able to sit on the base. This'll allow for testing of the prototype without the cover on. We also thought of making a removable rectangular lid for the cover shown in the top left sketch but the idea was scrapped because there will be no need for it. Also, the body of the craft is going to be rounded at the front and flat in the back. In the sketching phase we thought of placing the components in the front and the batteries in the back but decided later to switch their places to balance the weight of the craft more. 
  ![Design Sketch](./Project%20documentation/IMG20230322133938.jpg)

  ## How Can This Be Realized?

  Describe processes, materials, initial bill of materials. As said previously, the base will be laser cut, and the rest of the pieces will be 3d printed. Screws are needed to attach the pieces together. Also, the circuitry will need to be assembled and tested, and the code for the Arduino written. The initial parts needed for the project are:

  - A breadboard
  - An Arduino Nano
  - A battery holder and 6 batteries
  - A Bluetooth receiver module
  - 2X Brushless 6V DC motors
  - A servo motor
  - An H-bridge
  - A mechanical switch

  ## What Is Your Reflection on Your Process?

  We believe the physical aspect of the creation process will be relatively simple, but the complexity comes with the circuitry and the programming part.

  ## Roles

  Niklas - Manager, (Designer)
  
  Niranjan - Prototyper, (Programmer)
  
  Leevi - Programmer, (Prototyper)
  
  Kasperi - Designer, (Prototyper)

</details>

<details>
  <summary>Week 1</summary>

  ## Design and Fabrication Process

  What was your design and fabrication process during this week?
  We continued with our planning and designing of the Hovercraft. We set out requirements and needs for the 3D modeling of the hovercraft's body. But, our main focus remained on the electronic circuits and components. We defined all the components that were needed by us and set out to request all the additional components we identified that we would need. This included an Arduino Nano, the Bluetooth module HC-05, as well as an extra DC motor. We used Tinkercad to replicate and test how the circuitry should be wired and how the code should be written.

  ## Purpose of the Current Prototype, Test, or Idea

  What is the purpose of the current prototype, test, or idea?
  The objective of the prototype modeling and testing was to check how the circuit should be arranged, what works, and how it works. We wanted to see how well the components would work with each other. Through the tests, we were also able to analyze the faults in our assumptions and reassess the needed components/connection.

  ## Results

  What were the results?
  We realized that the circuit connections were more complex than they needed to be and simplified the connection. We were not able to get the code running up and full as there seemed to be some missing pieces in the code file.

  ## Consideration of Requirements

  How were the requirements considered?
  We defined the requirements based on our understanding of how the hovercraft should function. We identified what we would like the hovercraft to do, like reverse or change directions. Accordingly, we arranged the components in the circuit and programmed them to meet their requirements. For example, we only needed one DC motor to change the direction of rotation, the one on top helping the hovercraft move around. The motor on the bottom of the craft needed only to push air one way, so it need not change its direction of rotation.

  ## Reflection on the Process, Experiences, and Outcomes

  What is your reflection on your process, experiences, and outcomes?
  The process helped define many features of the craft. We were able to experience building the circuit from scratch piece by piece. The outcomes of the process shed light on what did not work so well, like the codes.

  ## Latest Circuit Connections

  The file contains the latest circuit connections that we simplified from the initial version.

  ## Weekly Task Distributions

  Leevi - Circuit Design and Programming.
  Niranjan - Circuit Design and Programming, Wiki Task Description.
  Kasperi - 3D Design and modeling.
  Niklas -  3D Design and modeling.

</details>

<details>
  <summary>Week 2</summary>

  ## Design and Fabrication Process

  What was your design and fabrication process during this week?
  We continued where we left off last week. We continued working on the circuitry but mostly focused on producing a rudimentary 3D model for the hovercraft with Fusion 360. The model's measurements weren't exact since we didn't know the measurements of all the components yet. We also found a 3D model for the propeller that we can use.

  ## Purpose of the Current Prototype, Test, or Idea

  What is the purpose of the current prototype, test, or idea?
  Currently, we are planning to 3D print most of the hovercraft. The cover, the propeller holder, and propeller are going to be 3D printed, but the base is supposed to be laser-cut and screwed to the cover. We are planning to place the breadboard under the propeller holder, the batteries to the front of the hovercraft inside the cover, and make the skirt of the hovercraft from a plastic trash bag.

  ## Results

  What were the results?
  We found some possible problems that have to be accounted for. For example, we have to think about the weight distribution of the hovercraft. If one side has too much weight the hovercraft might tip to a side. We also have to think more about the design of the hovercraft. We still have to add the screw holes to the design and make some other changes.

  ## Consideration of Requirements

  How were the requirements considered?
  We considered the requirements while working on the design. We pondered if we should make the hovercraft waterproof or not. We didn't decide yet but are leaning towards making the hovercraft land driven only. There would be no need to think about possible waterproofing problems.

  ## Reflection on the Process, Experiences, and Outcomes

  What is your reflection on your process, experiences, and outcomes?
  The outcomes of the process showed us some problems with the current design, like the weight distribution.

  ![Image 1](./Project%20documentation/w2.png)
  ![Image 2](./Project%20documentation/w21.png)
  ![Image 2](./Project%20documentation/w22.png)

  ## Weekly Task Distribution

  - Leevi: Circuit Design and Programming.
  - Niranjan: Circuit Design and Programming.
  - Kasperi: 3D Design and modeling, Wiki Description.
  - Niklas: 3D Design and modeling.

</details>

<details>
  <summary>Week 3</summary>

  ## Design and Fabrication Process

  What was your design and fabrication process during this week?
  This week we started planning a new design for the craft since the first design was a little too complicated. It included too many long 3D prints and we decided to laser cut some of the parts. We also received the parts that we are using for the project. In addition to the basic components kit, we received a Bluetooth module (HC-05) and 2 more powerful DC motors that are able to lift the craft off the ground. We also started working on the Arduino code.

  ## Purpose of the Current Prototype, Test, or Idea

  What is the purpose of the current prototype, test, or idea?
  We made some changes to the positions of the motors and fans to make the design more simple and balanced. We also added the screw holes to the design and started putting it together on 360 Fusion.

  ## Results

  What were the results?

  ![image](./Project%20documentation/w3.png)

  We got done with the first design of the new model on 360 Fusion and figured out how to import files from Fusion 360 to Inkscape. We also figured out some of the Arduino code for the Bluetooth module, DC motors, and the servo motor.

  ## Consideration of Requirements

  How were the requirements considered?
  We decided not to make the craft waterproof and focus on the more important things.

  ## Reflection on the Process, Experiences, and Outcomes

  What is your reflection on your process, experiences, and outcomes?
  We noticed that the code was not so simple since we also needed to control the speed of the fans and make them accelerate so that the craft does not jump up in the air when turned on.

</details>

<details>
  <summary>Week 4</summary>

  ## Design and Fabrication Process

  What was your design and fabrication process during this week?

  We finished our new 3D model, separated each part as individual STL files, and moved them to a USB stick to be eventually printed. We measured the dimensions of the parts that needed housing and made the holders for the motors. Also, the back fan casing was lifted up enough so that the servo motor could be fitted under it. We realized that some of the parts still needed more screw holes to make attaching the parts together easier. Also, the turning fins were tweaked so that attaching them to the servo would be easier. We got a tip that PLA plastic might be too fragile for our build and we should use ABS instead so we reserved an overnight time for the Raise3D Pro2 (II ABS) -printer. The program to control the motors also had some changes made, as the motors needed a way to be gradually sped up to help with the controlling of the craft.

  ## Purpose of the Current Prototype, Test, or Idea

  What is the purpose of the current prototype, test, or idea?
  The final changes were made to the design to ease the assembling part, and the material was chosen to make the final project more resistant to breakage. The changes to the Arduino code will make the liftoff smoother and allow for better control of the movement of the craft.

  ## Results

  What were the results?
  Below are all the parts laid out before separating them into individual files with all the final changes made.

  ![Hovercraft Parts](./Project%20documentation/w4.png)
  ![image](./Project%20documentation/w41.png)
  ![image](./Project%20documentation/w42.png)

  ## Consideration of Requirements

  How were the requirements considered?
  Since the bed for the 3D printer is 30cm by 30cm in size, we decided also to make the parts that hold the skirt in place with the laser cutter to save time and space on the bed. Also, the possibility of losing control of the craft and the rod of the motors slipping when in contact with the fan were considered when refining the code.

  ## Reflection on the Process, Experiences, and Outcomes

  What is your reflection on your process, experiences, and outcomes?
  The process of moving the F3D files to Inkscape required far more effort than we initially thought. We are happy with the final design, although a few changes could've still been made, such as making indentations on the back fan casing to make the turning range for the fins greater.

  ## Weekly Task Distribution

  - Leevi: Expanding the program with features to make the controls smoother.
  - Kasperi: Moving required F3D files into Inkscape and refining the designs.
  - Niklas: Finalizing the 3D design, converting and separating files.
  - Niranjan: Measuring dimensions of components and expanding the program with features to make the controls smoother.

</details>

<details>
  <summary>Week 5</summary>

  ## Design and Fabrication Process

  What was your design and fabrication process during this week?

  For week 5, we first began finalizing the printing files and booking 3D printing machines. We converted the initial design into separate parts and saved them as STL files. The process of printing at FabLab was not the most familiar, but we received help from multiple T.A.s. The printing files were aligned on the Model processing software and sent for printing to the machines. The printing in itself took around 20+ hours as the parts were quite big. We could not fit in some parts so we booked another printing slot for the next week.

  ![3D Printed Materials in Machine](./Project%20documentation/w5.jpg)

  We had to redo the 3D prints 2 times as the raft of the prints was curling. Eventually, it fixed itself, and the print was completed. Once done with the prints, we were faced with a new problem.

  ![Stubborn Raft on 3D Printed Parts](./Project%20documentation/w51.jpg)

  The nozzles were too close to one another causing drying problems with the raft, which resulted in the raft being unreasonably hard to separate. The problem persisted, and we had to consult the TA. He then helped us out by dissolving the pieces in Limonene which helped soften the raft material, eventually allowing us to scrape it off and wash it clean.

  ![3D Printed Parts Dissolving in Limonene](./Project%20documentation/w52.jpg)

  We then proceeded to work on the circuitry of the hovercraft. We realized that the Bluetooth module was 3.3V and it was being connected to the Arduino which was sending an output of 5V, and so we needed to devise new additions such as resistors into the circuit. We also had a look at how we plan to control the whole device and found out about mobile applications on Appstore that could help us out with this. We decided on this particular app for the Project: [Bluetooth RC Controller](https://play.google.com/store/apps/details?id=braulio.calle.bluetoothRCcontroller&hl=en_US&pli=1).

  ## Purpose of the Current Prototype, Test, or Idea

  What is the purpose of the current prototype, test, or idea?
  The purpose of the current prototype is to get the hovercraft up and moving. The idea is to understand the frame of the hovercraft and to prevent the components in the circuit from frying.

  ## Results

  What were the results?
  The results were quite intriguing as some of the 3D printed parts had problems with the raft being stubbornly stuck into them. The circuit problems were easily resolved using two resistors.

  ## Consideration of Requirements

  How were the requirements considered?
  The requirements were considered by keeping in mind the properties of physics and electric conduction.

  ## Reflection on the Process, Experiences, and Outcomes

  What is your reflection on your process, experiences, and outcomes?
  Overall the process was very insightful. We got to learn how to use a 3D printer and got to know more about its features. Learning theoretically about circuits is one thing and actually having to implement it is another, it gave us deep insight into the intricacies of electronic circuits.

  ## Weekly Task Distribution

  - Leevi: In charge of circuit design and connections.
  - Kasperi: Laser cutting and Assisting with 3D printing.
  - Niklas: Designing and converting 3D print files.
  - Niranjan: Overseeing 3D printing process and designing circuit.

</details>

<details>
  <summary>Week 6</summary>

  ## Design and Fabrication Process

  What was your design and fabrication process during this week?
  Week 6 we worked on getting the pieces together.
  ![image](./Project%20documentation/w6.jpg)
   We had to make new bigger holes for the screws and attempted to enlarge them with a hand drill, which failed. We then lasercut some of the parts again.

Old version
  ![Old Version](./Project%20documentation/w61.jpg)
  ![Old Version](./Project%20documentation/w62.jpg)
  
New version
  ![New Version](./Project%20documentation/w63.jpg)

  We also 3D printed the rest of the parts, including the turning wings and the key to the back fan.
  ![Image](./Project%20documentation/w64.jpg)
  Then we screwed together the bottom parts with long screws and screw nuts. Week 6, we also worked on the circuitry, figuring out how to connect the Bluetooth module and the servo motor to the breadboard.
  ![Image](./Project%20documentation/w65.jpg)
  ![Image](./Project%20documentation/w66.jpg)
  We sanded down the 3D printed parts and glued them to the laser-cut parts. 
  ![Image](./Project%20documentation/w67.jpg)
  We also fixed one broken part. During week 6, we got the motors working as well.

  ## Purpose of the Current Prototype, Test, or Idea

  What is the purpose of the current prototype, test, or idea?
  The purpose of the current prototype is to get the hovercraft up and moving. We got the pieces together and motors working, so now we need to attach the plastic bag to make it float.

  ## Results

  What were the results?
  Drilling bigger holes failed, so we had to lasercut some of the parts again. We got the frame of the craft together pretty well this week (last pic).

  ## Consideration of Requirements

  How were the requirements considered?
  The requirements were considered by keeping in mind the properties of physics and electric conduction.

  ## Reflection on the Process, Experiences, and Outcomes

  What is your reflection on your process, experiences, and outcomes?
  We faced a few problems but figured everything out in the end. We made good progress this week.

  ## Weekly Task Distribution

  - Leevi: Circuit designing, drilling new holes, and sanding down the pieces.
  - Kasperi: Laser cutting the parts again and Assisting with 3D printing.
  - Niklas: Sanding the pieces and assembling the body.
  - Niranjan: Overseeing 3D printing process and designing circuit.

</details>

<details>
  <summary>Week 7</summary>

  ## Design and Fabrication Process

  What was your design and fabrication process during this week?
  We finalized the body of the craft by screwing on the skirt. We attached the bottom fan before, realizing that we couldn't access it after attaching the bottom plate. Taping around the motor rod ensured a secure hold between the rod and the key. 
  ![Image](./Project%20documentation/w7.jpg)Extra material at the top prevented sliding, taped for a cleaner look. 
  ![Image](./Project%20documentation/w71.jpg)The back fan was attached, and after testing, a new, centered key was 3D printed. Turning wings were connected using wire hinges, and the servo motor was secured with a bolt from the spacers. Bubble wrap pieces served as tension to prevent wing movement. ![Image](./Project%20documentation/w72.jpg)The circuit was modified, moving the Arduino to a separate breadboard for clearer connections.
  ![Image](./Project%20documentation/w73.jpg) 
  The code was adjusted to interpret data from the Bluetooth module.

  ![Hovercraft Testing](./Project%20documentation/w74.MOV)

  ![Hovercraft Testing](./Project%20documentation/w75.MOV)

  ## Purpose of the Current Prototype, Test, or Idea

  What is the purpose of the current prototype, test, or idea?
  Initial tests were made to ensure the functionality of the device when it will eventually be put together.

  ## Results

  What were the results?

  ## Consideration of Requirements

  How were the requirements considered?
  We found out that the maximum output of the battery pack is around 0.2 A, and both motors require a minimum current of around 0.6 A, so we cannot get the final project running off just the battery pack.

</details>


# Project Summary

## Final Gadget (Hero Shot)

![Main Photo](./Project%20documentation/IMG_20230502_151154_560.jpg)

## Bill of Materials

- 2x breadboards
- Arduino Nano
- Battery holder and 6 batteries
- Bluetooth receiver module (HC-05)
- 2x Brushless DC motors (9V and 12V)
- Servo motor
- H-bridge
- Mechanical switch
- 3D printed parts (ABS plastic)
- Laser cut parts (ABS plastic)
- 15x screws
- 15x screw nuts
- 1.2Ω and 1.8Ω resistors
- Wires

## Electronics Diagram

![Circuit Diagram](./Project%20documentation/image__8_.png)

## Actual Final Circuit Pictures

![Actual Circuit 1](./Project%20documentation/IMG_5796.jpg)
![Actual Circuit 2](./Project%20documentation/IMG_5798.jpg)

## Project Documentation Photos and Videos

![Fusion 360 Photo](./Project%20documentation/image.png)

### Controls Working (MOV)
![Controls Working](./Project%20documentation/IMG_6761.MOV)

### Device Moving Around 1 (MP4)
![Device Moving Around 1](./Project%20documentation/VID20230503123519.mp4)

### Device Moving Around 2 (MP4)
![Device Moving Around 2](./Project%20documentation/VID20230503145638.mp4)

### Device Moving Around 3 (MP4)
![Device Moving Around 3](./Project%20documentation/VID_20230503150201.mp4)

### Device Moving Around 4 (MP4)
![Device Moving Around 4](./Project%20documentation/VID_20230503152108.mp4)

## Project Wrap-Up

### Achievements

- Successfully designed parts using Fusion 360 and Inkscape.
- 3D printed and laser-cut parts, assembling them to create the craft's frame.
- Attached motors to the frame, making them operational with FabLab's power supplies.
- Achieved smooth bottom airflow, allowing the craft to float and move.
- Conducted successful tests, demonstrating Arduino code responsiveness to phone application commands (see videos).

### Challenges and Missing Parts

- Need a more powerful LiPo battery for sufficient motor rotation.
- Considerations for future improvements.

## Individual Reflections

### Kasperi

- Learned file conversion from Fusion 360 to 2D for Gimp.
- Mastered laser cutting techniques.
- Gained insights into 3D printing and Arduino coding, including bug fixing.

### Leevi

- Started with no knowledge of digital fabrication.
- Acquired skills in using 3D printers, laser cutters, and Tinkercad.
- Learned Arduino programming (C++) and circuit design.
- Developed teamwork and creative problem-solving skills.

### Niklas

- Applied previous knowledge of laser cutters and 3D printers to a complex project.
- Expanded skills in designing and working with 3D objects using Fusion 360.
- Refined abilities in Inkscape, circuitry, and Arduino programming.
- Emphasized teamwork and creative problem-solving.

## Teamwork Reflection

- Communication: Good.
- Task Distribution: Effective.

### Areas for Improvement

- Consider pre-making certain parts for future projects to avoid issues with 3D printed components.
- Continue using effective communication channels (e.g., Telegram) for seamless collaboration.

## Course Feedback

- Overall positive experience.
- Suggestions for improvement welcomed.
