#tag Class
Protected Class ServerOrderFieldLabels

	#tag Property, Flags = &h0
		#tag Note
			Bandwidth field label.
		#tag EndNote
		bandwidth As OpenAPIClient.Models.ServerOrderFieldLabel
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			IPs field label.
		#tag EndNote
		ips As OpenAPIClient.Models.ServerOrderFieldLabel
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Operating System field label.
		#tag EndNote
		os As OpenAPIClient.Models.ServerOrderFieldLabel
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Control Panel field label.
		#tag EndNote
		cp As OpenAPIClient.Models.ServerOrderFieldLabel
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			RAID field label.
		#tag EndNote
		raid As OpenAPIClient.Models.ServerOrderFieldLabel
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Memory field label.
		#tag EndNote
		memory As OpenAPIClient.Models.ServerOrderFieldLabel
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Hard Drives field label
		#tag EndNote
		hd As OpenAPIClient.Models.ServerOrderFieldLabel
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
			Name="bandwidth"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="ServerOrderFieldLabel"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ips"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="ServerOrderFieldLabel"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="os"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="ServerOrderFieldLabel"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="cp"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="ServerOrderFieldLabel"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="raid"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="ServerOrderFieldLabel"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="memory"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="ServerOrderFieldLabel"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="hd"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="ServerOrderFieldLabel"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


