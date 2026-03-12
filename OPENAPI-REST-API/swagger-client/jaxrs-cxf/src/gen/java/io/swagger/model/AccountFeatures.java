package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
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

/**
  * Account Features data.
 **/
@Schema(description="Account Features data.")
public class AccountFeatures   {
  
  @Schema(description = "")
  private Integer disableReset = null;
  
  @Schema(description = "")
  private Integer disableReinstall = null;
 /**
   * Get disableReset
   * @return disableReset
  **/
  @JsonProperty("disable_reset")
  @NotNull
  public Integer getDisableReset() {
    return disableReset;
  }

  public void setDisableReset(Integer disableReset) {
    this.disableReset = disableReset;
  }

  public AccountFeatures disableReset(Integer disableReset) {
    this.disableReset = disableReset;
    return this;
  }

 /**
   * Get disableReinstall
   * @return disableReinstall
  **/
  @JsonProperty("disable_reinstall")
  @NotNull
  public Integer getDisableReinstall() {
    return disableReinstall;
  }

  public void setDisableReinstall(Integer disableReinstall) {
    this.disableReinstall = disableReinstall;
  }

  public AccountFeatures disableReinstall(Integer disableReinstall) {
    this.disableReinstall = disableReinstall;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AccountFeatures {\n");
    
    sb.append("    disableReset: ").append(toIndentedString(disableReset)).append("\n");
    sb.append("    disableReinstall: ").append(toIndentedString(disableReinstall)).append("\n");
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
