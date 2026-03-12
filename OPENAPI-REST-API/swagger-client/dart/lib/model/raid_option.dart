part of swagger.api;

class RaidOption {
  
  int id = null;

  String shortDesc = null;

  double monthlyPrice = null;

  RaidOption();

  @override
  String toString() {
    return 'RaidOption[id=$id, shortDesc=$shortDesc, monthlyPrice=$monthlyPrice, ]';
  }

  RaidOption.fromJson(Map<String, dynamic> json) {
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

  static List<RaidOption> listFromJson(List<dynamic> json) {
    return json == null ? new List<RaidOption>() : json.map((value) => new RaidOption.fromJson(value)).toList();
  }

  static Map<String, RaidOption> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, RaidOption>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new RaidOption.fromJson(value));
    }
    return map;
  }
}
