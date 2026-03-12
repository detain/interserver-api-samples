part of swagger.api;

class MemoryOption {
  
  int id = null;

  String shortDesc = null;

  double monthlyPrice = null;

  String monthlyPriceDisplay = null;

  MemoryOption();

  @override
  String toString() {
    return 'MemoryOption[id=$id, shortDesc=$shortDesc, monthlyPrice=$monthlyPrice, monthlyPriceDisplay=$monthlyPriceDisplay, ]';
  }

  MemoryOption.fromJson(Map<String, dynamic> json) {
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

  static List<MemoryOption> listFromJson(List<dynamic> json) {
    return json == null ? new List<MemoryOption>() : json.map((value) => new MemoryOption.fromJson(value)).toList();
  }

  static Map<String, MemoryOption> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, MemoryOption>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new MemoryOption.fromJson(value));
    }
    return map;
  }
}
