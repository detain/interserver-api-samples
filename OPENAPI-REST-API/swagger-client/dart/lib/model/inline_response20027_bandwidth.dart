part of swagger.api;

class InlineResponse20027Bandwidth {
  
  String id = null;

  String shortDesc = null;

  String longDesc = null;

  String monthlyPrice = null;

  InlineResponse20027Bandwidth();

  @override
  String toString() {
    return 'InlineResponse20027Bandwidth[id=$id, shortDesc=$shortDesc, longDesc=$longDesc, monthlyPrice=$monthlyPrice, ]';
  }

  InlineResponse20027Bandwidth.fromJson(Map<String, dynamic> json) {
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

  static List<InlineResponse20027Bandwidth> listFromJson(List<dynamic> json) {
    return json == null ? new List<InlineResponse20027Bandwidth>() : json.map((value) => new InlineResponse20027Bandwidth.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20027Bandwidth> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, InlineResponse20027Bandwidth>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new InlineResponse20027Bandwidth.fromJson(value));
    }
    return map;
  }
}
