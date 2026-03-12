package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
/**
 * A navigation link for QuickServer-related actions in the client portal.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "A navigation link for QuickServer-related actions in the client portal.")

public class QuickserverClientLink   {
  private String label = null;
  private String link = null;
  private String icon = null;
  private String iconText = null;
  private String helpText = null;
  private String otherAttr = null;

  /**
   * Link label
   **/
  public QuickserverClientLink label(String label) {
    this.label = label;
    return this;
  }

  
  
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
  public QuickserverClientLink link(String link) {
    this.link = link;
    return this;
  }

  
  
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
  public QuickserverClientLink icon(String icon) {
    this.icon = icon;
    return this;
  }

  
  
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
  public QuickserverClientLink iconText(String iconText) {
    this.iconText = iconText;
    return this;
  }

  
  
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
  public QuickserverClientLink helpText(String helpText) {
    this.helpText = helpText;
    return this;
  }

  
  
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
  public QuickserverClientLink otherAttr(String otherAttr) {
    this.otherAttr = otherAttr;
    return this;
  }

  
  
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
