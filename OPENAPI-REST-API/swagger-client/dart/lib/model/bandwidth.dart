part of swagger.api;

class Bandwidth {
  
  int id = null;

  String shortDesc = null;

  double monthlyPrice = null;

  String monthlyPriceDisplay = null;

  Bandwidth();

  @override
  String toString() {
    return 'Bandwidth[id=$id, shortDesc=$shortDesc, monthlyPrice=$monthlyPrice, monthlyPriceDisplay=$monthlyPriceDisplay, ]';
  }

  Bandwidth.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    id = json['id'];
    shortDesc = json['short_desc'];
    monthlyPrice = json['monthly_price'];
    monthlyPriceDisplay = json['monthly_price_display'];
  }

  Map<String, dynamic> toJson() {
    return {
      'id': id,
      'short_desc': shortDesc,
      'monthly_price': monthlyPrice,
      'monthly_price_display': monthlyPriceDisplay
     };
  }

  static List<Bandwidth> listFromJson(List<dynamic> json) {
    return json == null ? new List<Bandwidth>() : json.map((value) => new Bandwidth.fromJson(value)).toList();
  }

  static Map<String, Bandwidth> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, Bandwidth>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new Bandwidth.fromJson(value));
    }
    return map;
  }
}
