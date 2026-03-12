package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class AccountInfoDataExtra  {
  
  @ApiModelProperty(value = "")

  private String privateWhois;
 /**
   * Get privateWhois
   * @return privateWhois
  **/
  @JsonProperty("private_whois")
  public String getPrivateWhois() {
    return privateWhois;
  }

  public void setPrivateWhois(String privateWhois) {
    this.privateWhois = privateWhois;
  }

  public AccountInfoDataExtra privateWhois(String privateWhois) {
    this.privateWhois = privateWhois;
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
    AccountInfoDataExtra accountInfoDataExtra = (AccountInfoDataExtra) o;
    return Objects.equals(this.privateWhois, accountInfoDataExtra.privateWhois);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

