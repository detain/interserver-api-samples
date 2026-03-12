package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Account Features data.")

public class AccountFeatures   {
  private Integer disableReset = null;
  private Integer disableReinstall = null;

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("disable_reset")
  @NotNull
  public Integer getDisableReset() {
    return disableReset;
  }
  public void setDisableReset(Integer disableReset) {
    this.disableReset = disableReset;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("disable_reinstall")
  @NotNull
  public Integer getDisableReinstall() {
    return disableReinstall;
  }
  public void setDisableReinstall(Integer disableReinstall) {
    this.disableReinstall = disableReinstall;
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
