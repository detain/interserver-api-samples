package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
/**
 * A navigation link for backup service actions in the client portal.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "A navigation link for backup service actions in the client portal.")

public class BackupClientLink   {
  private String label = null;
  private String link = null;
  private String icon = null;
  private String iconText = null;
  private String helpText = null;
  private String otherAttr = null;

  /**
   * Label of the client link.
   **/
  public BackupClientLink label(String label) {
    this.label = label;
    return this;
  }

  
  
  @Schema(description = "Label of the client link.")
  @JsonProperty("label")
  @NotNull
  public String getLabel() {
    return label;
  }
  public void setLabel(String label) {
    this.label = label;
  }

  /**
   * Link URL of the client link.
   **/
  public BackupClientLink link(String link) {
    this.link = link;
    return this;
  }

  
  
  @Schema(description = "Link URL of the client link.")
  @JsonProperty("link")
  @NotNull
  public String getLink() {
    return link;
  }
  public void setLink(String link) {
    this.link = link;
  }

  /**
   * Icon of the client link.
   **/
  public BackupClientLink icon(String icon) {
    this.icon = icon;
    return this;
  }

  
  
  @Schema(description = "Icon of the client link.")
  @JsonProperty("icon")
  @NotNull
  public String getIcon() {
    return icon;
  }
  public void setIcon(String icon) {
    this.icon = icon;
  }

  /**
   * Icon text of the client link.
   **/
  public BackupClientLink iconText(String iconText) {
    this.iconText = iconText;
    return this;
  }

  
  
  @Schema(description = "Icon text of the client link.")
  @JsonProperty("icon_text")
  @NotNull
  public String getIconText() {
    return iconText;
  }
  public void setIconText(String iconText) {
    this.iconText = iconText;
  }

  /**
   * Help text of the client link.
   **/
  public BackupClientLink helpText(String helpText) {
    this.helpText = helpText;
    return this;
  }

  
  
  @Schema(description = "Help text of the client link.")
  @JsonProperty("help_text")
  @NotNull
  public String getHelpText() {
    return helpText;
  }
  public void setHelpText(String helpText) {
    this.helpText = helpText;
  }

  /**
   * Other attributes of the client link.
   **/
  public BackupClientLink otherAttr(String otherAttr) {
    this.otherAttr = otherAttr;
    return this;
  }

  
  
  @Schema(description = "Other attributes of the client link.")
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
    BackupClientLink backupClientLink = (BackupClientLink) o;
    return Objects.equals(label, backupClientLink.label) &&
        Objects.equals(link, backupClientLink.link) &&
        Objects.equals(icon, backupClientLink.icon) &&
        Objects.equals(iconText, backupClientLink.iconText) &&
        Objects.equals(helpText, backupClientLink.helpText) &&
        Objects.equals(otherAttr, backupClientLink.otherAttr);
  }

  @Override
  public int hashCode() {
    return Objects.hash(label, link, icon, iconText, helpText, otherAttr);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BackupClientLink {\n");
    
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
