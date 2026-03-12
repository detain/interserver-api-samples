package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * AccountInfoDataExtra
 */
@Validated
@Introspected

public class AccountInfoDataExtra   {
  @JsonProperty("private_whois")
  private String privateWhois = null;

  public AccountInfoDataExtra privateWhois(String privateWhois) {
    this.privateWhois = privateWhois;
    return this;
  }

  /**
   * Get privateWhois
   * @return privateWhois
  **/
  @Schema(description = "")
  @NotNull

  public String getPrivateWhois() {
    return privateWhois;
  }

  public void setPrivateWhois(String privateWhois) {
    this.privateWhois = privateWhois;
  }


  @Override
  public boolean equals(java.lang.Object o) {
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
