part of swagger.api;

class OperatingSystem {
  
  int id = null;

  String shortDesc = null;

  double monthlyPrice = null;

  OperatingSystem();

  @override
  String toString() {
    return 'OperatingSystem[id=$id, shortDesc=$shortDesc, monthlyPrice=$monthlyPrice, ]';
  }

  OperatingSystem.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    id = json['id'];
    shortDesc = json['short_desc'];
    monthlyPrice = json['monthly_price'];
  }

  Map<String, dynamic> toJson() {
    return {
      'id': id,
      'short_desc': shortDesc,
      'monthly_price': monthlyPrice
     };
  }

  static List<OperatingSystem> listFromJson(List<dynamic> json) {
    return json == null ? new List<OperatingSystem>() : json.map((value) => new OperatingSystem.fromJson(value)).toList();
  }

  static Map<String, OperatingSystem> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, OperatingSystem>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new OperatingSystem.fromJson(value));
    }
    return map;
  }
}
