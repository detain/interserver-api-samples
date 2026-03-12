package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Account Features data.
 **/
@Schema(description = "Account Features data.")


public class AccountFeatures   {
  @JsonProperty("disable_reset")
  private Integer disableReset = null;
  @JsonProperty("disable_reinstall")
  private Integer disableReinstall = null;
  /**
   **/
  public AccountFeatures disableReset(Integer disableReset) {
    this.disableReset = disableReset;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("disable_reset")
  public Integer getDisableReset() {
    return disableReset;
  }
  public void setDisableReset(Integer disableReset) {
    this.disableReset = disableReset;
  }

  /**
   **/
  public AccountFeatures disableReinstall(Integer disableReinstall) {
    this.disableReinstall = disableReinstall;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("disable_reinstall")
  public Integer getDisableReinstall() {
    return disableReinstall;
  }
  public void setDisableReinstall(Integer disableReinstall) {
    this.disableReinstall = disableReinstall;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AccountFeatures accountFeatures = (AccountFeatures) o;
    return Objects.equals(disableReset, accountFeatures.disableReset) &&
        Objects.equals(disableReinstall, accountFeatures.disableReinstall);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
