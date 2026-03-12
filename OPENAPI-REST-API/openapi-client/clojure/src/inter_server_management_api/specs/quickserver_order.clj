(ns inter-server-management-api.specs.quickserver-order
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.quickserver-order-server-details :refer :all]
            [inter-server-management-api.specs.quickserver-order-templates :refer :all]
            [inter-server-management-api.specs.quickserver-order-version :refer :all]
            [inter-server-management-api.specs.quickserver-order-distro-sel :refer :all]
            )
  (:import (java.io File)))


(def quickserver-order-data
  {
   (ds/opt :qs_id) string?
   (ds/opt :server_details) quickserver-order-server-details-spec
   (ds/opt :templates) quickserver-order-templates-spec
   (ds/opt :version) quickserver-order-version-spec
   (ds/opt :distro_sel) quickserver-order-distro-sel-spec
   })

(def quickserver-order-spec
  (ds/spec
    {:name ::quickserver-order
     :spec quickserver-order-data}))
