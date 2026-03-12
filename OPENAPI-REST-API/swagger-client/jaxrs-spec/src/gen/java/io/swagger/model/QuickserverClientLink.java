package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * A navigation link for QuickServer-related actions in the client portal.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "A navigation link for QuickServer-related actions in the client portal.")

public class QuickserverClientLink   {

  private @Valid String label = null;

  private @Valid String link = null;

  private @Valid String icon = null;

  private @Valid String iconText = null;

  private @Valid String helpText = null;

  private @Valid String otherAttr = null;

  /**
   * Link label
   **/
  public QuickserverClientLink label(String label) {
    this.label = label;
    return this;
  }

  
  @ApiModelProperty(example = "Invoices", value = "Link label")
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

  
  @ApiModelProperty(example = "invoices", value = "Link")
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

  
  @ApiModelProperty(example = "fas fa-file-invoice-dollar fa-w-12", value = "Icon class")
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

  
  @ApiModelProperty(value = "Icon text")
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

  
  @ApiModelProperty(example = "Invoice History", value = "Help text")
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

  
  @ApiModelProperty(value = "Other attribute")
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
