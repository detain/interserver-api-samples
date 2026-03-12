part of swagger.api;

class InlineResponse20026Bandwidth {
  
  String id = null;

  String shortDesc = null;

  String longDesc = null;

  String monthlyPrice = null;

  InlineResponse20026Bandwidth();

  @override
  String toString() {
    return 'InlineResponse20026Bandwidth[id=$id, shortDesc=$shortDesc, longDesc=$longDesc, monthlyPrice=$monthlyPrice, ]';
  }

  InlineResponse20026Bandwidth.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    id = json['id'];
    shortDesc = json['short_desc'];
    longDesc = json['long_desc'];
    monthlyPrice = json['monthly_price'];
  }

  Map<String, dynamic> toJson() {
    return {
      'id': id,
      'short_desc': shortDesc,
      'long_desc': longDesc,
      'monthly_price': monthlyPrice
     };
  }

  static List<InlineResponse20026Bandwidth> listFromJson(List<dynamic> json) {
    return json == null ? new List<InlineResponse20026Bandwidth>() : json.map((value) => new InlineResponse20026Bandwidth.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20026Bandwidth> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, InlineResponse20026Bandwidth>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new InlineResponse20026Bandwidth.fromJson(value));
    }
    return map;
  }
}
