(ns inter-server-management-api.specs.quickserver-addons
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.quickserver-addons-row :refer :all]
            )
  (:import (java.io File)))


(def quickserver-addons-data
  {
   (ds/opt :title) string?
   (ds/opt :rows) (s/coll-of quickserver-addons-row-spec)
   })

(def quickserver-addons-spec
  (ds/spec
    {:name ::quickserver-addons
     :spec quickserver-addons-data}))
