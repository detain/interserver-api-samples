part of swagger.api;

class VpsTrafficDataDataResponse {
  
  VpsTrafficDataDataResponse();

  @override
  String toString() {
    return 'VpsTrafficDataDataResponse[]';
  }

  VpsTrafficDataDataResponse.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
  }

  Map<String, dynamic> toJson() {
    return {
     };
  }

  static List<VpsTrafficDataDataResponse> listFromJson(List<dynamic> json) {
    return json == null ? new List<VpsTrafficDataDataResponse>() : json.map((value) => new VpsTrafficDataDataResponse.fromJson(value)).toList();
  }

  static Map<String, VpsTrafficDataDataResponse> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, VpsTrafficDataDataResponse>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new VpsTrafficDataDataResponse.fromJson(value));
    }
    return map;
  }
}
