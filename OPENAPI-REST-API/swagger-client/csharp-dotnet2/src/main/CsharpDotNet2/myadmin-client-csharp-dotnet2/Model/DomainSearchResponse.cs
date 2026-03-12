using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Lookup and suggestion results returned for a domain search.
  /// </summary>
  [DataContract]
  public class DomainSearchResponse {
    /// <summary>
    /// Indicates whether the registrar search succeeded.
    /// </summary>
    /// <value>Indicates whether the registrar search succeeded.</value>
    [DataMember(Name="success", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "success")]
    public bool? Success { get; set; }

    /// <summary>
    /// Human-readable status text from the registrar.
    /// </summary>
    /// <value>Human-readable status text from the registrar.</value>
    [DataMember(Name="response_text", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "response_text")]
    public string ResponseText { get; set; }

    /// <summary>
    /// Response time as reported by the registrar.
    /// </summary>
    /// <value>Response time as reported by the registrar.</value>
    [DataMember(Name="response_time", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "response_time")]
    public string ResponseTime { get; set; }

    /// <summary>
    /// Availability lookup results for queried domains.
    /// </summary>
    /// <value>Availability lookup results for queried domains.</value>
    [DataMember(Name="lookup", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "lookup")]
    public List<Object> Lookup { get; set; }

    /// <summary>
    /// Suggested alternative domains and availability data.
    /// </summary>
    /// <value>Suggested alternative domains and availability data.</value>
    [DataMember(Name="suggest", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "suggest")]
    public List<Object> Suggest { get; set; }

    /// <summary>
    /// TLDs evaluated during the search.
    /// </summary>
    /// <value>TLDs evaluated during the search.</value>
    [DataMember(Name="tlds", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "tlds")]
    public List<string> Tlds { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class DomainSearchResponse {\n");
      sb.Append("  Success: ").Append(Success).Append("\n");
      sb.Append("  ResponseText: ").Append(ResponseText).Append("\n");
      sb.Append("  ResponseTime: ").Append(ResponseTime).Append("\n");
      sb.Append("  Lookup: ").Append(Lookup).Append("\n");
      sb.Append("  Suggest: ").Append(Suggest).Append("\n");
      sb.Append("  Tlds: ").Append(Tlds).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }

    /// <summary>
    /// Get the JSON string presentation of the object
    /// </summary>
    /// <returns>JSON string presentation of the object</returns>
    public string ToJson() {
      return JsonConvert.SerializeObject(this, Formatting.Indented);
    }

}
}
