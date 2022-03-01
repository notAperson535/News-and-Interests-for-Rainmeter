[MeasureSiteWeather]
Measure=WebParser
URL=https://api.msn.com/weather/overview/user?apikey=j5i4gDqHL6nGYwx5wi5kRhXjtf2c5qgFX9fzfk0TOo&units=#Unit#
RegExp=(?siU)"cap":"(.*)",.*"temp":(.*).0,.*"tempHi":(.*).0,.*"tempLo":(.*).0,
UpdateRate=3600

[MeasureSiteWeather2]
Measure=WebParser
URL=https://api.msn.com/weather/overview/user?apikey=j5i4gDqHL6nGYwx5wi5kRhXjtf2c5qgFX9fzfk0TOo&units=#Unit#
RegExp=(?siU)"daytime":"(.*)",
UpdateRate=3600

[MeasureIconParser]
Measure=WebParser
URL=https://api.msn.com/weather/current?&appId=9e21380c-ff19-4c78-b4ea-19558e93a5d3&apiKey=j5i4gDqHL6nGYwx5wi5kRhXjtf2c5qgFX9fzfk0TOo&ocid=msftweather&wrapOData=false
RegExp=(?siU)"icon":(.*),
UpdateRate=3600

[MeasureSite]
Measure=WebParser
URL=https://www.msn.com/en-us/feed/?ocid=winp1taskbar
RegExp=(?siU)<span class="weacity">(.*)</span>
UpdateRate=3600

[MeasureCurrentLocation]
Measure=WebParser
URL=[MeasureSite]
StringIndex=1

[MeasureCurrentCondition]
Measure=WebParser
URL=[MeasureSiteWeather]
StringIndex=1

[MeasureCurrentTemperature]
Measure=WebParser
URL=[MeasureSiteWeather]
StringIndex=2

[MeasureCurrentIcon]
Measure=WebParser
URL=[MeasureIconParser]
StringIndex=1
Substitute="19":"LightRain","67":"Thunderstorms","21":"LightRain","31":"LightRain","22":"ModerateRain","32":"ModerateRain","41":"LightRain","43":"RainShowers","33":"RainShowers","29":"MostlyClear","23":"RainShowers","33":"MostlyCloudy","31":"MostlyCloudy","22":"ModerateRain","5":"Cloudy","3":"PartlyCloudy","1":"Clear","4":"MostlyCloudy","2":"MostlyClear"

[MeasureCurrentTemperatureHigh]
Measure=WebParser
URL=[MeasureSiteWeather]
StringIndex=3

[MeasureCurrentTemperatureLow]
Measure=WebParser
URL=[MeasureSiteWeather]
StringIndex=4

[MeasureDayOrNight]
Measure=WebParser
URL=[MeasureSiteWeather2]
StringIndex=1
Substitute="d":"Day","n":"Night"