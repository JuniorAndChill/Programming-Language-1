<table style="width:100%; border: none; border-collapse: collapse;">
<tbody>
<tr>
<!-- Column 1: The Information Table -->
<td style="width: 60%; vertical-align: top; padding-right: 20px;">
<table style="width:100%; border-collapse: collapse;">
    <tr style="background-color:#D3E3FD; color:#333;">
      <th style="padding: 8px; border: 1px solid #ccc; text-align: left;">Entity 1</th>
      <th style="padding: 8px; border: 1px solid #ccc; text-align: center;">Cardinality</th>
      <th style="padding: 8px; border: 1px solid #ccc; text-align: left;">Relationship</th>
      <th style="padding: 8px; border: 1px solid #ccc; text-align: left;">Entity 2</th>
      <th style="padding: 8px; border: 1px solid #ccc; text-align: center;">Cardinality</th>
    </tr>
    <tr style="background-color:#FFFFFF;">
      <td style="padding: 8px; border: 1px solid #ccc;">Author</td>
      <td style="padding: 8px; border: 1px solid #ccc; text-align: center;">1</td>
      <td style="padding: 8px; border: 1px solid #ccc;">writes</td>
      <td style="padding: 8px; border: 1px solid #ccc;">Book</td>
      <td style="padding: 8px; border: 1px solid #ccc; text-align: center;">M</td>
    </tr>
    <tr style="background-color:#F2F2F2;">
      <td style="padding: 8px; border: 1px solid #ccc;">Student</td>
      <td style="padding: 8px; border: 1px solid #ccc; text-align: center;">1</td>
      <td style="padding: 8px; border: 1px solid #ccc;">borrows</td>
      <td style="padding: 8px; border: 1px solid #ccc;">Loan</td>
      <td style="padding: 8px; border: 1px solid #ccc; text-align: center;">0..4</td>
    </tr>
    <tr style="background-color:#FFFFFF;">
      <td style="padding: 8px; border: 1px solid #ccc;">Book</td>
      <td style="padding: 8px; border: 1px solid #ccc; text-align: center;">1</td>
      <td style="padding: 8px; border: 1px solid #ccc;">involves</td>
      <td style="padding: 8px; border: 1px solid #ccc;">Loan</td>
      <td style="padding: 8px; border: 1px solid #ccc; text-align: center;">M</td>
    </tr>
    <tr style="background-color:#F2F2F2;">
      <td style="padding: 8px; border: 1px solid #ccc;">Librarian</td>
      <td style="padding: 8px; border: 1px solid #ccc; text-align: center;">1</td>
      <td style="padding: 8px; border: 1px solid #ccc;">manages</td>
      <td style="padding: 8px; border: 1px solid #ccc;">Loan</td>
      <td style="padding: 8px; border: 1px solid #ccc; text-align: center;">M</td>
    </tr>
  </table>

</td>
<!-- Column 2: The Text Block -->
<td style="width: 40%; vertical-align: top;">
  <h3>Analysis of System Relationships</h3>
  <p>The table on the left outlines the core business rules for the library management system. These relationships, known as cardinalities, define how entities interact with one another.</p>
  
  <p>For instance, the <strong>one-to-many (1:M)</strong> relationship between an <code>Author</code> and a <code>Book</code> is a foundational concept. It ensures that every book in the database can be traced back to a single author, while allowing each author to be credited for multiple works.</p>

  <p>A key business rule is enforced on the <code>Student</code> to <code>Loan</code> relationship, where a student is limited to a maximum of four concurrent loans.</p>

</td>
</tr>
</tbody>
</table>

```mermaid
---
config:
  sankey:
    showValues: false
---
sankey

Agricultural 'waste',Bio-conversion,124.729
Bio-conversion,Liquid,0.597
Bio-conversion,Losses,26.862
Bio-conversion,Solid,280.322
Bio-conversion,Gas,81.144
Biofuel imports,Liquid,35
Biomass imports,Solid,35
Coal imports,Coal,11.606
Coal reserves,Coal,63.965
Coal,Solid,75.571
District heating,Industry,10.639
District heating,Heating and cooling - commercial,22.505
District heating,Heating and cooling - homes,46.184
Electricity grid,Over generation / exports,104.453
Electricity grid,Heating and cooling - homes,113.726
Electricity grid,H2 conversion,27.14
Electricity grid,Industry,342.165
Electricity grid,Road transport,37.797
Electricity grid,Agriculture,4.412
Electricity grid,Heating and cooling - commercial,40.858
Electricity grid,Losses,56.691
Electricity grid,Rail transport,7.863
Electricity grid,Lighting & appliances - commercial,90.008
Electricity grid,Lighting & appliances - homes,93.494
Gas imports,Ngas,40.719
Gas reserves,Ngas,82.233
Gas,Heating and cooling - commercial,0.129
Gas,Losses,1.401
Gas,Thermal generation,151.891
Gas,Agriculture,2.096
Gas,Industry,48.58
Geothermal,Electricity grid,7.013
H2 conversion,H2,20.897
H2 conversion,Losses,6.242
H2,Road transport,20.897
Hydro,Electricity grid,6.995
Liquid,Industry,121.066
Liquid,International shipping,128.69
Liquid,Road transport,135.835
Liquid,Domestic aviation,14.458
Liquid,International aviation,206.267
Liquid,Agriculture,3.64
Liquid,National navigation,33.218
Liquid,Rail transport,4.413
Marine algae,Bio-conversion,4.375
Ngas,Gas,122.952
Nuclear,Thermal generation,839.978
Oil imports,Oil,504.287
Oil reserves,Oil,107.703
Oil,Liquid,611.99
Other waste,Solid,56.587
Other waste,Bio-conversion,77.81
Pumped heat,Heating and cooling - homes,193.026
Pumped heat,Heating and cooling - commercial,70.672
Solar PV,Electricity grid,59.901
Solar Thermal,Heating and cooling - homes,19.263
Solar,Solar Thermal,19.263
Solar,Solar PV,59.901
Solid,Agriculture,0.882
Solid,Thermal generation,400.12
Solid,Industry,46.477
Thermal generation,Electricity grid,525.531
Thermal generation,Losses,787.129
Thermal generation,District heating,79.329
Tidal,Electricity grid,9.452
UK land based bioenergy,Bio-conversion,182.01
Wave,Electricity grid,19.013
Wind,Electricity grid,289.366
```

```mermaid
---
config:
    xyChart:
        width: 900
        height: 600
        showDataLabel: true
    themeVariables:
        xyChart:
            titleColor: "#ff0000"
---
xychart
    title "Sales Revenue"
    x-axis [jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec]
    y-axis "Revenue (in $)" 4000 --> 11000
    bar [5000, 6000, 7500, 8200, 9500, 10500, 11000, 10200, 9200, 8500, 7000, 6000]
    line [5000, 6000, 7500, 8200, 9500, 10500, 11000, 10200, 9200, 8500, 7000, 6000]
```

```mermaid
---
title: "TCP Packet"
---
packet
0-15: "Source Port"
16-31: "Destination Port"
32-63: "Sequence Number"
64-95: "Acknowledgment Number #56"
96-99: "Data Offset"
100-105: "Reserved"
106: "URG"
107: "ACK"
108: "PSH"
109: "RST"
110: "SYN"
111: "FIN"
112-127: "Window"
128-143: "Checksum"
144-159: "Urgent Pointer"
160-191: "(Options and Padding)"
192-255: "Data (variable length)"
```

```mermaid
packet
title UDP Packet
+16: "Source Port"
+16: "Destination Port"
32-47: "Length"
48-63: "Checksum"
64-95: "Data (variable length)"
```

```mermaid
---
config:
  kanban:
    ticketBaseUrl: 'https://mermaidchart.atlassian.net/browse/#TICKET#'
---
kanban
  Todo
    [Create Documentation]
    docs[Create Blog about the new diagram]
  [In progress]
    id6[Create renderer so that it works in all cases. We also add some extra text here for testing purposes. And some more just for the extra flare.]
  id9[Ready for deploy]
    id8[Design grammar]@{ assigned: 'knsv' }
  id10[Ready for test]
    id4[Create parsing tests]@{ ticket: MC-2038, assigned: 'K.Sveidqvist', priority: 'High' }
    id66[last item]@{ priority: 'Very Low', assigned: 'knsv' }
  id11[Done]
    id5[define getData]
    id2[Title of diagram is more than 100 chars when user duplicates diagram with 100 char]@{ ticket: MC-2036, priority: 'Very High'}
    id3[Update DB function]@{ ticket: MC-2037, assigned: knsv, priority: 'High' }

  id12[Can't reproduce]
    id3[Weird flickering in Firefox]
```

```mermaid
pie title How do we make fun of Snowdra today?
         "Your mom jokes" : 2
         "Remind him he's a butt Doctor" : 7
         "He's an AI" : 1
```

```mermaid
timeline
    title History of S
    2002 : LinkedIn
    2004 : Facebook : Google
    2005 : YouTube
    2006 : Twitter
```

```mermaid
 graph LR
      A["$$x^2$$"] -->|"$$\sqrt{x+3}$$"| B("$$\frac{1}{2}$$")
      A -->|"$$\overbrace{a+b+c}^{\text{note}}$$"| C("$$\pi r^2$$")
      B --> D("$$x = \begin{cases} a &\text{if } b \\ c &\text{if } d \end{cases}$$")
      C --> E("$$x(t)=c_1\begin{bmatrix}-\cos{t}+\sin{t}\\ 2\cos{t} \end{bmatrix}e^{2t}$$")
```