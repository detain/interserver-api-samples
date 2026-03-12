(ns inter-server-management-api.specs.hostname-object
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def hostname-object-data
  {
   (ds/opt :hostname) string?
   })

(def hostname-object-spec
  (ds/spec
    {:name ::hostname-object
     :spec hostname-object-data}))
