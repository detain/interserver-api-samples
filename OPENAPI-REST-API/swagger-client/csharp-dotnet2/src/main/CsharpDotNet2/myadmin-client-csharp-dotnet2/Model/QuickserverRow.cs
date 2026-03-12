using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// A result row from the &#x60;Quickservers&#x60; &#x60;GET&#x60; request.
  /// </summary>
  [DataContract]
  public class QuickserverRow {
    /// <summary>
    /// The id of the qs.
    /// </summary>
    /// <value>The id of the qs.</value>
    [DataMember(Name="qs_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_id")]
    public string QsId { get; set; }

    /// <summary>
    /// The name of the qs.
    /// </summary>
    /// <value>The name of the qs.</value>
    [DataMember(Name="qs_name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_name")]
    public string QsName { get; set; }

    /// <summary>
    /// The cost of the qs.
    /// </summary>
    /// <value>The cost of the qs.</value>
    [DataMember(Name="cost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cost")]
    public string Cost { get; set; }

    /// <summary>
    /// The hostname of the qs.
    /// </summary>
    /// <value>The hostname of the qs.</value>
    [DataMember(Name="qs_hostname", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_hostname")]
    public string QsHostname { get; set; }

    /// <summary>
    /// The status of the qs.
    /// </summary>
    /// <value>The status of the qs.</value>
    [DataMember(Name="qs_status", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_status")]
    public string QsStatus { get; set; }

    /// <summary>
    /// The comment of the qs.
    /// </summary>
    /// <value>The comment of the qs.</value>
    [DataMember(Name="qs_comment", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_comment")]
    public string QsComment { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class QuickserverRow {\n");
      sb.Append("  QsId: ").Append(QsId).Append("\n");
      sb.Append("  QsName: ").Append(QsName).Append("\n");
      sb.Append("  Cost: ").Append(Cost).Append("\n");
      sb.Append("  QsHostname: ").Append(QsHostname).Append("\n");
      sb.Append("  QsStatus: ").Append(QsStatus).Append("\n");
      sb.Append("  QsComment: ").Append(QsComment).Append("\n");
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
