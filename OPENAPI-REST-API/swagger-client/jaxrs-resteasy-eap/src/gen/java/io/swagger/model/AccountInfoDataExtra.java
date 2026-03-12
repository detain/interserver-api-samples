package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class AccountInfoDataExtra   {
  private String privateWhois = null;

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("private_whois")
  @NotNull
  public String getPrivateWhois() {
    return privateWhois;
  }
  public void setPrivateWhois(String privateWhois) {
    this.privateWhois = privateWhois;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AccountInfoDataExtra accountInfoDataExtra = (AccountInfoDataExtra) o;
    return Objects.equals(privateWhois, accountInfoDataExtra.privateWhois);
  }

  @Override
  public int hashCode() {
    return Objects.hash(privateWhois);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AccountInfoDataExtra {\n");
    
    sb.append("    privateWhois: ").append(toIndentedString(privateWhois)).append("\n");
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
