# thought

Articulate and explore your thoughts.

## Goal
I need a way of articulating and exploring my thoughts in a way that's easy to read and tweak. This could be implemented in textual form (or maybe graphically).

## Current Approach
I write my thoughts in text format. I segment my thoughts using 2 line breaks. Sometimes if thoughts are closely coupled, I'll reduce the number of line breaks to 1.

This approach is better than plain-old unaided thought, but has its issues. For instance, thoughts often form a tree-like structure. I'll have a thought at a high level of abstraction, then I'll have to break it into multiple chunks before I can fully evaluate/understand it. This is bad in plain textual format because I use no indentation.

Another issue, chronology, arises from this tree-like structure of thought. As you break down a problem, you eventually solve all the problems at the lowest level of abstraction and need to "return" to the parent problem. It's completely unclear what level of abstraction each thought is at, and it's easy for thoughts to trail on without ever resolving the root parent thought.

A further issue arises from the difficulty to distinguish between different types of thoughts. Sometimes I state a fact. Sometimes I pose a question to myself. Sometimes I answer a question. Sometimes I _explore_ or entertain an idea I don't necessarily agree with. In plain text, these all blend together, and there is benefit to be gained from segregating them.

### Summary of Requirements

1. Thoughts form a tree-like structure that needs to be visible.
2. Differing types of thoughts (e.g. Questions, Answers, Statements of Fact, Entertained Ideas) need to be distinguishable.
3. The chronological order of thoughts should be preserved while keeping similar thoughts nearby (if possible).

