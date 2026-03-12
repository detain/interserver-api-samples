package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * A single row in the backup IP information table.
 */




public class BackupIPInfoRow   {
  private String desc = null;

  private String value = null;

  public BackupIPInfoRow desc(String desc) {
    this.desc = desc;
    return this;
  }

  /**
   * Description of the IP information.
   * @return desc
   **/
    public String getDesc() {
    return desc;
  }

  public void setDesc(String desc) {
    this.desc = desc;
  }

  public BackupIPInfoRow value(String value) {
    this.value = value;
    return this;
  }

  /**
   * Value of the IP information.
   * @return value
   **/
    public String getValue() {
    return value;
  }

  public void setValue(String value) {
    this.value = value;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BackupIPInfoRow backupIPInfoRow = (BackupIPInfoRow) o;
    return Objects.equals(this.desc, backupIPInfoRow.desc) &&
        Objects.equals(this.value, backupIPInfoRow.value);
  }

  @Override
  public int hashCode() {
    return Objects.hash(desc, value);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BackupIPInfoRow {\n");
    
    sb.append("    desc: ").append(toIndentedString(desc)).append("\n");
    sb.append("    value: ").append(toIndentedString(value)).append("\n");
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
