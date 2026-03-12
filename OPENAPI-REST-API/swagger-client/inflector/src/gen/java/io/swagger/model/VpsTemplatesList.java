package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.VpsTemplateRow;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;


/**
 * A listing of the OS Templates available for use.
 **/
@Schema(description = "A listing of the OS Templates available for use.")


public class VpsTemplatesList   {
  @JsonProperty("templates")
  private List<VpsTemplateRow> templates = new ArrayList<VpsTemplateRow>();
  /**
   * A listing of the templates.
   **/
  public VpsTemplatesList templates(List<VpsTemplateRow> templates) {
    this.templates = templates;
    return this;
  }

  
  @Schema(required = true, description = "A listing of the templates.")
  @JsonProperty("templates")
  public List<VpsTemplateRow> getTemplates() {
    return templates;
  }
  public void setTemplates(List<VpsTemplateRow> templates) {
    this.templates = templates;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsTemplatesList vpsTemplatesList = (VpsTemplatesList) o;
    return Objects.equals(templates, vpsTemplatesList.templates);
  }

  @Override
  public int hashCode() {
    return Objects.hash(templates);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsTemplatesList {\n");
    sb.append("    templates: ").append(toIndentedString(templates)).append("\n");
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
