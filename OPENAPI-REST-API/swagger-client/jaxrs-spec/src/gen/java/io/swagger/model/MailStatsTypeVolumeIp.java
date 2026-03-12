package io.swagger.model;

import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class MailStatsTypeVolumeIp   {

  private @Valid Integer _1111 = null;

  private @Valid Integer _2222 = null;

  private @Valid Integer _3333 = null;

  private @Valid Integer _4444 = null;

  /**
   **/
  public MailStatsTypeVolumeIp _1111(Integer _1111) {
    this._1111 = _1111;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("1.1.1.1")
  @NotNull

  public Integer get1111() {
    return _1111;
  }
  public void set1111(Integer _1111) {
    this._1111 = _1111;
  }

  /**
   **/
  public MailStatsTypeVolumeIp _2222(Integer _2222) {
    this._2222 = _2222;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("2.2.2.2")
  @NotNull

  public Integer get2222() {
    return _2222;
  }
  public void set2222(Integer _2222) {
    this._2222 = _2222;
  }

  /**
   **/
  public MailStatsTypeVolumeIp _3333(Integer _3333) {
    this._3333 = _3333;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("3.3.3.3")
  @NotNull

  public Integer get3333() {
    return _3333;
  }
  public void set3333(Integer _3333) {
    this._3333 = _3333;
  }

  /**
   **/
  public MailStatsTypeVolumeIp _4444(Integer _4444) {
    this._4444 = _4444;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("4.4.4.4")
  @NotNull

  public Integer get4444() {
    return _4444;
  }
  public void set4444(Integer _4444) {
    this._4444 = _4444;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MailStatsTypeVolumeIp mailStatsTypeVolumeIp = (MailStatsTypeVolumeIp) o;
    return Objects.equals(_1111, mailStatsTypeVolumeIp._1111) &&
        Objects.equals(_2222, mailStatsTypeVolumeIp._2222) &&
        Objects.equals(_3333, mailStatsTypeVolumeIp._3333) &&
        Objects.equals(_4444, mailStatsTypeVolumeIp._4444);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_1111, _2222, _3333, _4444);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
