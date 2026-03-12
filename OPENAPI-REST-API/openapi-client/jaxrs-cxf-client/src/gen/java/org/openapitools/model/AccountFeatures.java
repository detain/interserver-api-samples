package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Account Features data.
 */
@ApiModel(description="Account Features data.")

public class AccountFeatures  {
  
  @ApiModelProperty(value = "")

  private Integer disableReset;

  @ApiModelProperty(value = "")

  private Integer disableReinstall;
 /**
   * Get disableReset
   * @return disableReset
  **/
  @JsonProperty("disable_reset")
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AccountFeatures accountFeatures = (AccountFeatures) o;
    return Objects.equals(this.disableReset, accountFeatures.disableReset) &&
        Objects.equals(this.disableReinstall, accountFeatures.disableReinstall);
  }

  @Override
  public int hashCode() {
    return Objects.hash(disableReset, disableReinstall);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

