(ns inter-server-management-api.specs.quickserver-ip-info
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.quickserver-ip-table-row :refer :all]
            )
  (:import (java.io File)))


(def quickserver-ip-info-data
  {
   (ds/opt :title) string?
   (ds/opt :rows) (s/coll-of quickserver-ip-table-row-spec)
   })

(def quickserver-ip-info-spec
  (ds/spec
    {:name ::quickserver-ip-info
     :spec quickserver-ip-info-data}))
