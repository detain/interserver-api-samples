(ns inter-server-management-api.specs.vps-plesk-license
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def vps-plesk-license-data
  {
   (ds/opt :id) int?
   (ds/opt :name) string?
   (ds/opt :sub_name) string?
   (ds/opt :cost) int?
   })

(def vps-plesk-license-spec
  (ds/spec
    {:name ::vps-plesk-license
     :spec vps-plesk-license-data}))
