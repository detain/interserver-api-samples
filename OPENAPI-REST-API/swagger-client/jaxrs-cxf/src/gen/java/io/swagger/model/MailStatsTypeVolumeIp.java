package io.swagger.model;

import javax.validation.constraints.*;

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

public class MailStatsTypeVolumeIp   {
  
  @Schema(description = "")
  private Integer _1111 = null;
  
  @Schema(description = "")
  private Integer _2222 = null;
  
  @Schema(description = "")
  private Integer _3333 = null;
  
  @Schema(description = "")
  private Integer _4444 = null;
 /**
   * Get _1111
   * @return _1111
  **/
  @JsonProperty("1.1.1.1")
  @NotNull
  public Integer get1111() {
    return _1111;
  }

  public void set1111(Integer _1111) {
    this._1111 = _1111;
  }

  public MailStatsTypeVolumeIp _1111(Integer _1111) {
    this._1111 = _1111;
    return this;
  }

 /**
   * Get _2222
   * @return _2222
  **/
  @JsonProperty("2.2.2.2")
  @NotNull
  public Integer get2222() {
    return _2222;
  }

  public void set2222(Integer _2222) {
    this._2222 = _2222;
  }

  public MailStatsTypeVolumeIp _2222(Integer _2222) {
    this._2222 = _2222;
    return this;
  }

 /**
   * Get _3333
   * @return _3333
  **/
  @JsonProperty("3.3.3.3")
  @NotNull
  public Integer get3333() {
    return _3333;
  }

  public void set3333(Integer _3333) {
    this._3333 = _3333;
  }

  public MailStatsTypeVolumeIp _3333(Integer _3333) {
    this._3333 = _3333;
    return this;
  }

 /**
   * Get _4444
   * @return _4444
  **/
  @JsonProperty("4.4.4.4")
  @NotNull
  public Integer get4444() {
    return _4444;
  }

  public void set4444(Integer _4444) {
    this._4444 = _4444;
  }

  public MailStatsTypeVolumeIp _4444(Integer _4444) {
    this._4444 = _4444;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailStatsTypeVolumeIp {\n");
    
    sb.append("    _1111: ").append(toIndentedString(_1111)).append("\n");
    sb.append("    _2222: ").append(toIndentedString(_2222)).append("\n");
    sb.append("    _3333: ").append(toIndentedString(_3333)).append("\n");
    sb.append("    _4444: ").append(toIndentedString(_4444)).append("\n");
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
