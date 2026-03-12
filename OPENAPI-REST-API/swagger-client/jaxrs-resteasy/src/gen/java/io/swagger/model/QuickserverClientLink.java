package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="A navigation link for QuickServer-related actions in the client portal.")

public class QuickserverClientLink   {
  private String label = null;  private String link = null;  private String icon = null;  private String iconText = null;  private String helpText = null;  private String otherAttr = null;

  /**
   * Link label
   **/
  
  @Schema(example = "Invoices", description = "Link label")
  @JsonProperty("label")
  @NotNull
  public String getLabel() {
    return label;
  }
  public void setLabel(String label) {
    this.label = label;
  }

  /**
   * Link
   **/
  
  @Schema(example = "invoices", description = "Link")
  @JsonProperty("link")
  @NotNull
  public String getLink() {
    return link;
  }
  public void setLink(String link) {
    this.link = link;
  }

  /**
   * Icon class
   **/
  
  @Schema(example = "fas fa-file-invoice-dollar fa-w-12", description = "Icon class")
  @JsonProperty("icon")
  @NotNull
  public String getIcon() {
    return icon;
  }
  public void setIcon(String icon) {
    this.icon = icon;
  }

  /**
   * Icon text
   **/
  
  @Schema(description = "Icon text")
  @JsonProperty("icon_text")
  @NotNull
  public String getIconText() {
    return iconText;
  }
  public void setIconText(String iconText) {
    this.iconText = iconText;
  }

  /**
   * Help text
   **/
  
  @Schema(example = "Invoice History", description = "Help text")
  @JsonProperty("help_text")
  @NotNull
  public String getHelpText() {
    return helpText;
  }
  public void setHelpText(String helpText) {
    this.helpText = helpText;
  }

  /**
   * Other attribute
   **/
  
  @Schema(description = "Other attribute")
  @JsonProperty("other_attr")
  @NotNull
  public String getOtherAttr() {
    return otherAttr;
  }
  public void setOtherAttr(String otherAttr) {
    this.otherAttr = otherAttr;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    QuickserverClientLink quickserverClientLink = (QuickserverClientLink) o;
    return Objects.equals(label, quickserverClientLink.label) &&
        Objects.equals(link, quickserverClientLink.link) &&
        Objects.equals(icon, quickserverClientLink.icon) &&
        Objects.equals(iconText, quickserverClientLink.iconText) &&
        Objects.equals(helpText, quickserverClientLink.helpText) &&
        Objects.equals(otherAttr, quickserverClientLink.otherAttr);
  }

  @Override
  public int hashCode() {
    return Objects.hash(label, link, icon, iconText, helpText, otherAttr);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QuickserverClientLink {\n");
    
    sb.append("    label: ").append(toIndentedString(label)).append("\n");
    sb.append("    link: ").append(toIndentedString(link)).append("\n");
    sb.append("    icon: ").append(toIndentedString(icon)).append("\n");
    sb.append("    iconText: ").append(toIndentedString(iconText)).append("\n");
    sb.append("    helpText: ").append(toIndentedString(helpText)).append("\n");
    sb.append("    otherAttr: ").append(toIndentedString(otherAttr)).append("\n");
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
