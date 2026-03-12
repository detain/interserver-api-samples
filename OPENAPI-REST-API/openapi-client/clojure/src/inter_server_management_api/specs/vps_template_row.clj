(ns inter-server-management-api.specs.vps-template-row
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def vps-template-row-data
  {
   (ds/opt :template_id) string?
   (ds/opt :template_type) string?
   (ds/opt :template_os) string?
   (ds/opt :template_version) string?
   (ds/opt :template_bits) string?
   (ds/opt :template_file) string?
   (ds/opt :template_available) string?
   (ds/opt :template_name) string?
   (ds/opt :template_dir) string?
   })

(def vps-template-row-spec
  (ds/spec
    {:name ::vps-template-row
     :spec vps-template-row-data}))
