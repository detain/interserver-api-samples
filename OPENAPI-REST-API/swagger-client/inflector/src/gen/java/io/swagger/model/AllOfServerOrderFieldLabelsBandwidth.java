package io.swagger.model;
import java.util.Objects;
import io.swagger.model.ServerOrderFieldLabel;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Bandwidth field label.
 **/
@Schema(description = "Bandwidth field label.")


public class AllOfServerOrderFieldLabelsBandwidth extends ServerOrderFieldLabel  {

  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AllOfServerOrderFieldLabelsBandwidth allOfServerOrderFieldLabelsBandwidth = (AllOfServerOrderFieldLabelsBandwidth) o;
    return true;
  }

  @Override
  public int hashCode() {
    return Objects.hash();
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AllOfServerOrderFieldLabelsBandwidth {\n");
    sb.append("    ").append(toIndentedString(super.toString())).append("\n");
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
