(ns inter-server-management-api.specs.domain-prov-process-pending
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.domain-prov-process-pending-attributes :refer :all]
            )
  (:import (java.io File)))


(def domain-prov-process-pending-data
  {
   (ds/opt :_OPS_version) string?
   (ds/opt :response_text) string?
   (ds/opt :protocol) string?
   (ds/opt :response_code) string?
   (ds/opt :action) string?
   (ds/opt :object) string?
   (ds/opt :is_success) string?
   (ds/opt :attributes) domain-prov-process-pending-attributes-spec
   })

(def domain-prov-process-pending-spec
  (ds/spec
    {:name ::domain-prov-process-pending
     :spec domain-prov-process-pending-data}))
