package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * SSH Keys
 */
@ApiModel(description="SSH Keys")

public class AccountSshKey  {
  
  @ApiModelProperty(value = "")

  private String sshKey;
 /**
   * Get sshKey
   * @return sshKey
  **/
  @JsonProperty("ssh_key")
  public String getSshKey() {
    return sshKey;
  }

  public void setSshKey(String sshKey) {
    this.sshKey = sshKey;
  }

  public AccountSshKey sshKey(String sshKey) {
    this.sshKey = sshKey;
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
    AccountSshKey accountSshKey = (AccountSshKey) o;
    return Objects.equals(this.sshKey, accountSshKey.sshKey);
  }

  @Override
  public int hashCode() {
    return Objects.hash(sshKey);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AccountSshKey {\n");
    
    sb.append("    sshKey: ").append(toIndentedString(sshKey)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

