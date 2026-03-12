package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class MailStatsTypeVolumeIp  {
  
  @ApiModelProperty(value = "")

  private Integer _1_1_1_1;

  @ApiModelProperty(value = "")

  private Integer _2_2_2_2;

  @ApiModelProperty(value = "")

  private Integer _3_3_3_3;

  @ApiModelProperty(value = "")

  private Integer _4_4_4_4;
 /**
   * Get _1_1_1_1
   * @return _1_1_1_1
  **/
  @JsonProperty("1.1.1.1")
  public Integer get1111() {
    return _1_1_1_1;
  }

  public void set1111(Integer _1_1_1_1) {
    this._1_1_1_1 = _1_1_1_1;
  }

  public MailStatsTypeVolumeIp _1_1_1_1(Integer _1_1_1_1) {
    this._1_1_1_1 = _1_1_1_1;
    return this;
  }

 /**
   * Get _2_2_2_2
   * @return _2_2_2_2
  **/
  @JsonProperty("2.2.2.2")
  public Integer get2222() {
    return _2_2_2_2;
  }

  public void set2222(Integer _2_2_2_2) {
    this._2_2_2_2 = _2_2_2_2;
  }

  public MailStatsTypeVolumeIp _2_2_2_2(Integer _2_2_2_2) {
    this._2_2_2_2 = _2_2_2_2;
    return this;
  }

 /**
   * Get _3_3_3_3
   * @return _3_3_3_3
  **/
  @JsonProperty("3.3.3.3")
  public Integer get3333() {
    return _3_3_3_3;
  }

  public void set3333(Integer _3_3_3_3) {
    this._3_3_3_3 = _3_3_3_3;
  }

  public MailStatsTypeVolumeIp _3_3_3_3(Integer _3_3_3_3) {
    this._3_3_3_3 = _3_3_3_3;
    return this;
  }

 /**
   * Get _4_4_4_4
   * @return _4_4_4_4
  **/
  @JsonProperty("4.4.4.4")
  public Integer get4444() {
    return _4_4_4_4;
  }

  public void set4444(Integer _4_4_4_4) {
    this._4_4_4_4 = _4_4_4_4;
  }

  public MailStatsTypeVolumeIp _4_4_4_4(Integer _4_4_4_4) {
    this._4_4_4_4 = _4_4_4_4;
    return this;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MailStatsTypeVolumeIp mailStatsTypeVolumeIp = (MailStatsTypeVolumeIp) o;
    return Objects.equals(this._1_1_1_1, mailStatsTypeVolumeIp._1_1_1_1) &&
        Objects.equals(this._2_2_2_2, mailStatsTypeVolumeIp._2_2_2_2) &&
        Objects.equals(this._3_3_3_3, mailStatsTypeVolumeIp._3_3_3_3) &&
        Objects.equals(this._4_4_4_4, mailStatsTypeVolumeIp._4_4_4_4);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_1_1_1_1, _2_2_2_2, _3_3_3_3, _4_4_4_4);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailStatsTypeVolumeIp {\n");
    
    sb.append("    _1_1_1_1: ").append(toIndentedString(_1_1_1_1)).append("\n");
    sb.append("    _2_2_2_2: ").append(toIndentedString(_2_2_2_2)).append("\n");
    sb.append("    _3_3_3_3: ").append(toIndentedString(_3_3_3_3)).append("\n");
    sb.append("    _4_4_4_4: ").append(toIndentedString(_4_4_4_4)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

