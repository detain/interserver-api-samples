#tag Class
Protected Class HomeServices

	#tag Property, Flags = &h0
		domains As OpenAPIClient.Models.HomeServicesDomains
	#tag EndProperty


	#tag Property, Flags = &h0
		webhosting As OpenAPIClient.Models.HomeServicesWebhosting
	#tag EndProperty


	#tag Property, Flags = &h0
		vps As OpenAPIClient.Models.HomeServicesVps
	#tag EndProperty


	#tag Property, Flags = &h0
		licenses As OpenAPIClient.Models.HomeServicesLicenses
	#tag EndProperty


	#tag Property, Flags = &h0
		servers As OpenAPIClient.Models.HomeServicesServers
	#tag EndProperty


	#tag Property, Flags = &h0
		backups As OpenAPIClient.Models.HomeServicesBackups
	#tag EndProperty





	#tag ViewBehavior
		#tag ViewProperty
			Name="Index"
			Visible=true
			Group="ID"
			InitialValue="-2147483648"
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Super"
			Visible=true
			Group="ID"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Left"
			Visible=true
			Group="Position"
			InitialValue="0"
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Top"
			Visible=true
			Group="Position"
			InitialValue="0"
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="domains"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="HomeServicesDomains"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="webhosting"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="HomeServicesWebhosting"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="vps"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="HomeServicesVps"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="licenses"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="HomeServicesLicenses"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="servers"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="HomeServicesServers"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="backups"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="HomeServicesBackups"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


