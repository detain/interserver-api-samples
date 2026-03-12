using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// 
  /// </summary>
  [DataContract]
  public class LoginSubmissionExampleGrecaptcharesponse {
    /// <summary>
    /// Gets or Sets VIsShallow
    /// </summary>
    [DataMember(Name="__v_isShallow", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "__v_isShallow")]
    public bool? VIsShallow { get; set; }

    /// <summary>
    /// Gets or Sets Dep
    /// </summary>
    [DataMember(Name="dep", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "dep")]
    public LoginSubmissionExampleGrecaptcharesponseDep Dep { get; set; }

    /// <summary>
    /// Gets or Sets VIsRef
    /// </summary>
    [DataMember(Name="__v_isRef", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "__v_isRef")]
    public bool? VIsRef { get; set; }

    /// <summary>
    /// Gets or Sets RawValue
    /// </summary>
    [DataMember(Name="_rawValue", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "_rawValue")]
    public string RawValue { get; set; }

    /// <summary>
    /// Gets or Sets Value
    /// </summary>
    [DataMember(Name="_value", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "_value")]
    public string Value { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class LoginSubmissionExampleGrecaptcharesponse {\n");
      sb.Append("  VIsShallow: ").Append(VIsShallow).Append("\n");
      sb.Append("  Dep: ").Append(Dep).Append("\n");
      sb.Append("  VIsRef: ").Append(VIsRef).Append("\n");
      sb.Append("  RawValue: ").Append(RawValue).Append("\n");
      sb.Append("  Value: ").Append(Value).Append("\n");
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
