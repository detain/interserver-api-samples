package io.swagger.model;


import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

public class AccountInfoDataFraudrecord   {
  
  @Schema(description = "")
  private String score = null;
  
  @Schema(description = "")
  private String count = null;
  
  @Schema(description = "")
  private String reliability = null;
  
  @Schema(description = "")
  private String code = null;
 /**
   * Get score
   * @return score
  **/
  @JsonProperty("score")
  public String getScore() {
    return score;
  }

  public void setScore(String score) {
    this.score = score;
  }

  public AccountInfoDataFraudrecord score(String score) {
    this.score = score;
    return this;
  }

 /**
   * Get count
   * @return count
  **/
  @JsonProperty("count")
  public String getCount() {
    return count;
  }

  public void setCount(String count) {
    this.count = count;
  }

  public AccountInfoDataFraudrecord count(String count) {
    this.count = count;
    return this;
  }

 /**
   * Get reliability
   * @return reliability
  **/
  @JsonProperty("reliability")
  public String getReliability() {
    return reliability;
  }

  public void setReliability(String reliability) {
    this.reliability = reliability;
  }

  public AccountInfoDataFraudrecord reliability(String reliability) {
    this.reliability = reliability;
    return this;
  }

 /**
   * Get code
   * @return code
  **/
  @JsonProperty("code")
  public String getCode() {
    return code;
  }

  public void setCode(String code) {
    this.code = code;
  }

  public AccountInfoDataFraudrecord code(String code) {
    this.code = code;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AccountInfoDataFraudrecord {\n");
    
    sb.append("    score: ").append(toIndentedString(score)).append("\n");
    sb.append("    count: ").append(toIndentedString(count)).append("\n");
    sb.append("    reliability: ").append(toIndentedString(reliability)).append("\n");
    sb.append("    code: ").append(toIndentedString(code)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
