package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * SSH Keys
 */




public class AccountSshKey   {
  private String sshKey = null;

  public AccountSshKey sshKey(String sshKey) {
    this.sshKey = sshKey;
    return this;
  }

  /**
   * Get sshKey
   * @return sshKey
   **/
    public String getSshKey() {
    return sshKey;
  }

  public void setSshKey(String sshKey) {
    this.sshKey = sshKey;
  }


  @Override
  public boolean equals(java.lang.Object o) {
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
